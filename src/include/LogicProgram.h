#ifndef TOURNAMENT_GRID_GENERATOR_LOGICPROGRAM_H
#define TOURNAMENT_GRID_GENERATOR_LOGICPROGRAM_H

#include "Windows.h"

class Windows;

class LogicProgram {
public:
    virtual void prepare(Windows *windows) = 0;

    virtual void render(Windows *windows) = 0;

    virtual void clear(Windows *windows) = 0;
};

#endif //TOURNAMENT_GRID_GENERATOR_LOGICPROGRAM_H
