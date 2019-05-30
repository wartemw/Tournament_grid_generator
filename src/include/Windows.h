#ifndef TOURNAMENT_GRID_GENERATOR_WINDOWS_H
#define TOURNAMENT_GRID_GENERATOR_WINDOWS_H

#include "Stdaf.h"
#include "LogicProgram.h"

class LogicProgram;

class Windows {
private:
    LogicProgram *_logicProgram;
    Display *display;
    Window window;
    XEvent event;
    int screen;
    int _width, _height;
public:
    Windows(LogicProgram *logicProgram);

    virtual ~Windows();

    Display *getDisplay();

    Window getWindow();

    XEvent &getEvent();

    int getScreen();

    int getWidth() const;

    int getHeight() const;

    Screen *getDisplaySize();

    void createDisplay(unsigned int width, unsigned int height);

    void loop();

    LogicProgram *getLogicProgram() const;
};

#endif //TOURNAMENT_GRID_GENERATOR_WINDOWS_H