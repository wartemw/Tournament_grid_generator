#ifndef TOURNAMENT_GRID_GENERATOR_PAIR_H
#define TOURNAMENT_GRID_GENERATOR_PAIR_H

#include "Stdaf.h"
#include "Team.h"

class Pair {
private:
    vector<Team *> _teamList;
    Team *_winner;
    Team *_loser;

public:
    const vector<Team *> &getTeamList() const;

    Team *getWinner() const;

    void setWinner(Team *winner);

    Team *getLoser() const;

    void setLoser(Team *loser);

};

#endif //TOURNAMENT_GRID_GENERATOR_PAIR_H
