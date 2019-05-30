#ifndef TOURNAMENT_GRID_GENERATOR_LOGICGRIDGENERATION_H
#define TOURNAMENT_GRID_GENERATOR_LOGICGRIDGENERATION_H

#include "Stdaf.h"
#include "LogicProgram.h"
#include "RoundGraph.h"

class Windows;

class LogicGridGeneration : public LogicProgram {
private:
    RoundGraph *text;
public:
    void set(Round *round) override;

    void prepare(Windows *windows) override;

    void render(Windows *windows) override;

    void clear(Windows *windows) override;
};


#endif //TOURNAMENT_GRID_GENERATOR_LOGICGRIDGENERATION_H
