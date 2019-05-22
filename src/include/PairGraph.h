#ifndef TOURNAMENT_GRID_GENERATOR_PAIRGRAPH_H
#define TOURNAMENT_GRID_GENERATOR_PAIRGRAPH_H

#include "Stdaf.h"
#include "Pair.h"
#include "TeamGraph.h"
#include "Windows.h"


class PairGraph {
private:
    Pair *pair;
    vector<TeamGraph *> _teamList;
public:
    PairGraph(Pair *pair, int x, int y);

    void render(Windows *Windows);
};


#endif //TOURNAMENT_GRID_GENERATOR_PAIRGRAPH_H
