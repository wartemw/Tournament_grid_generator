#ifndef TOURNAMENT_GRID_GENERATOR_ROUNDGRAPH_H
#define TOURNAMENT_GRID_GENERATOR_ROUNDGRAPH_H

#include "Stdaf.h"
#include "Round.h"
#include "PairGraph.h"

class RoundGraph {
private:
    Round *root = nullptr;
    PairGraph *_pair = nullptr;
    RoundGraph *_next = nullptr;
    RoundGraph *_prefLeft = nullptr;
    RoundGraph *_prefRight = nullptr;
public:
    RoundGraph(Round *root, int x, int y);

    void init(RoundGraph *root, int x, int y);
};

#endif //TOURNAMENT_GRID_GENERATOR_ROUNDGRAPH_H
