#ifndef TOURNAMENT_GRID_GENERATOR_GRIDMANAGER_H
#define TOURNAMENT_GRID_GENERATOR_GRIDMANAGER_H

#include "include/Stdaf.h"
#include "Round.h"

class GridManager {
private:
    int _type;
    vector<Team*> _teamList;
public:
    void addTeam(Team *team);
    void setType(int type);
};

#endif //TOURNAMENT_GRID_GENERATOR_GRIDMANAGER_H