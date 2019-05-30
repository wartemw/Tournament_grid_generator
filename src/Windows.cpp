#include "Windows.h"

Windows::Windows(LogicProgram *logicProgram) : _logicProgram(logicProgram) {}

Windows::~Windows() {
    /* Закрыть соединение с X сервером */
    XCloseDisplay(display);
}

Display *Windows::getDisplay() {
    return display;
}

Window Windows::getWindow() {
    return window;
}

XEvent &Windows::getEvent() {
    return event;
}

int Windows::getScreen() {
    return screen;
}

int Windows::getWidth() const {
    return _width;
}

int Windows::getHeight() const {
    return _height;
}

Screen *Windows::getDisplaySize() {
    Display *d = XOpenDisplay(nullptr);
    return DefaultScreenOfDisplay(d);
}

void Windows::createDisplay(unsigned int width, unsigned int height) {
    _width = width;
    _height = height;

    if ((display = XOpenDisplay(getenv("DISPLAY"))) == NULL) {
        printf("Can't connect X server:%screen\n", strerror(errno));
        exit(1);
    }

    screen = XDefaultScreen(display);

    /* Создать окно */
    window = XCreateSimpleWindow(display, RootWindow(display, screen), 0, 0, width, height, 1,
                                 XBlackPixel(display, screen), XWhitePixel(display, screen));

    /* На какие события будем реагировать */
    XSelectInput(display, window, ExposureMask | KeyPressMask);

    /* Вывести окно на экран */
    XMapWindow(display, window);

    loop();
}

void Windows::loop() {
    /* Бесконечный цикл обработки событий */
    _logicProgram->prepare(this);
    while (true) {
        XNextEvent(display, &event);
        _logicProgram->render(this);
        /* При нажатии кнопки-выход */
        if (event.type == KeyPress) {
            break;
        }
    }
    _logicProgram->clear(this);
}

LogicProgram *Windows::getLogicProgram() const {
    return _logicProgram;
}
