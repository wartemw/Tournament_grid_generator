#ifndef TOURNAMENT_GRID_GENERATOR_TEAM_H
#define TOURNAMENT_GRID_GENERATOR_TEAM_H

#include "include/Stdaf.h"

class Team {
private:
    inline static int ID_STATIC = 1;
    string _title;
    int _id;
    unsigned int _numWin;
public:
    Team(string title);

    const string &getTitle() const;

    void setTitle(const string &title);

    int getId() const;

    unsigned int getNumWin() const;

    void setNumWin(unsigned int numWin);
};

#endif //TOURNAMENT_GRID_GENERATOR_TEAM_H