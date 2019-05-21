#ifndef TOURNAMENT_GRID_GENERATOR_PAIR_H
#define TOURNAMENT_GRID_GENERATOR_PAIR_H

#include "Stdaf.h"
#include "Team.h"

class Pair {
private:
    vector<Team *> _teamList;

public:
    const vector<Team *> &getTeamList() const;

};

#endif //TOURNAMENT_GRID_GENERATOR_PAIR_H
