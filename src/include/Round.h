#ifndef TOURNAMENT_GRID_GENERATOR_ROUND_H
#define TOURNAMENT_GRID_GENERATOR_ROUND_H

#include "Stdaf.h"
#include "Team.h"
#include "Pair.h"

class Round {
private:
    int sizeRourd;
    Pair *_pair;
    Round *_next;
    Round *_prefLeft;
    Round *_prefRight;

public:

    int getSizeRourd() const;

    void setSizeRourd(int sizeRourd);

    Pair *getPair() const;

    void setPair(Pair *pair);

    Round *getNext() const;

    void setNext(Round *next);

    Round *getPrefLeft() const;

    void setPrefLeft(Round *prefLeft);

    Round *getPrefRight() const;

    void setPrefRight(Round *prefRight);
};


#endif //TOURNAMENT_GRID_GENERATOR_ROUND_H
