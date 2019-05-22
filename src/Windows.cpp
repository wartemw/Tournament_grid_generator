#include "Windows.h"

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

void Windows::loop() {
    /* Бесконечный цикл обработки событий */
    while (true) {
        XNextEvent(display, &event);
        /* При нажатии кнопки-выход */
        if (event.type == KeyPress)
            break;
    }
}