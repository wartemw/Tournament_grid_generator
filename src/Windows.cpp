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