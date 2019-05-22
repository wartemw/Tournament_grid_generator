#ifndef TOURNAMENT_GRID_GENERATOR_WINDOWS_H
#define TOURNAMENT_GRID_GENERATOR_WINDOWS_H

#include "Stdaf.h"

class Windows {
private:
    Display *display;
    Window window;
    XEvent event;
    int screen;
public:
    Display *getDisplay();

    Window getWindow();

    XEvent &getEvent();

    int getScreen();
};

#endif //TOURNAMENT_GRID_GENERATOR_WINDOWS_H