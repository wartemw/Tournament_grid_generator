#ifndef TOURNAMENT_GRID_GENERATOR_TEAMGRAPH_H
#define TOURNAMENT_GRID_GENERATOR_TEAMGRAPH_H

#include "Team.h"
#include "Stdaf.h"
#include "TextGraph.h"

class TeamGraph {
private:
    TextGraph *textGraph;
public:
    TeamGraph(Team *team, int x, int y);
};


#endif //TOURNAMENT_GRID_GENERATOR_TEAMGRAPH_H
