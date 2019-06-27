#ifndef TOURNAMENT_GRID_GENERATOR_ROUND_H
#define TOURNAMENT_GRID_GENERATOR_ROUND_H

#include "Stdaf.h"
#include "Team.h"
#include "Pair.h"

class Round {
private:
    int sizeRourd;
    Pair *_pair;
    Round *_next = nullptr;
    Round *_prefLeft = nullptr;
    Round *_prefRight = nullptr;

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

    void print(ostream &os);
};


#endif //TOURNAMENT_GRID_GENERATOR_ROUND_H
