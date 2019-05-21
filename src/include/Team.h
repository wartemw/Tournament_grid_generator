#ifndef TOURNAMENT_GRID_GENERATOR_TEAM_H
#define TOURNAMENT_GRID_GENERATOR_TEAM_H

#include "include/Stdaf.h"

class Team {
private:
    string _title;
public:
    Team(string title);

    const string &getTitle() const;

    void setTitle(const string &title);
};

#endif //TOURNAMENT_GRID_GENERATOR_TEAM_H