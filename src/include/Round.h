#ifndef TOURNAMENT_GRID_GENERATOR_ROUND_H
#define TOURNAMENT_GRID_GENERATOR_ROUND_H

#include "Stdaf.h"
#include "Team.h"
#include "Pair.h"

class Round {
private:
    int sizeRourd;
public:
    int getSizeRourd() const;

    void setSizeRourd(int sizeRourd);
};


#endif //TOURNAMENT_GRID_GENERATOR_ROUND_H
