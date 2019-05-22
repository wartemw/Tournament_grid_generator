#ifndef TOURNAMENT_GRID_GENERATOR_WINDOWS_H
#define TOURNAMENT_GRID_GENERATOR_WINDOWS_H

#include "Stdaf.h"

class Windows {
private:
    Display *display;
    Window window;
    XEvent event;
    int screen;
    int _width, _height;
public:
    Display *getDisplay();

    Window getWindow();

    XEvent &getEvent();

    int getScreen();

    int getWidth() const;

    int getHeight() const;

    void createDisplay(unsigned int width, unsigned int height);

    void loop();
};

#endif //TOURNAMENT_GRID_GENERATOR_WINDOWS_H