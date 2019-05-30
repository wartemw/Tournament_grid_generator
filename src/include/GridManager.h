#ifndef TOURNAMENT_GRID_GENERATOR_GRIDMANAGER_H
#define TOURNAMENT_GRID_GENERATOR_GRIDMANAGER_H

#include "include/Stdaf.h"
#include "Round.h"

class GridManager {
private:
    int _type;
    vector<Team *> _teamList;
    Round *root;
public:
    void addTeam(Team *team);

    void setType(int type);

    void createGrid();

    void printGrid();

    Round *getRound(int sizeRound, int &team, int &pair, int &index, bool max);

    Round *getRoot() const;
};

#endif //TOURNAMENT_GRID_GENERATOR_GRIDMANAGER_H