#include "Round.h"

int Round::getSizeRourd() const {
    return sizeRourd;
}

void Round::setSizeRourd(int sizeRourd) {
    Round::sizeRourd = sizeRourd;
}

Pair *Round::getPair() const {
    return _pair;
}

void Round::setPair(Pair *pair) {
    _pair = pair;
}

Round *Round::getNext() const {
    return _next;
}

void Round::setNext(Round *next) {
    _next = next;
}

Round *Round::getPrefLeft() const {
    return _prefLeft;
}

void Round::setPrefLeft(Round *prefLeft) {
    _prefLeft = prefLeft;
}

Round *Round::getPrefRight() const {
    return _prefRight;
}

void Round::setPrefRight(Round *prefRight) {
    _prefRight = prefRight;
}

void Round::print(ostream &os) {
    if (getPrefLeft() != nullptr) {
        getPrefLeft()->print(os);
    }

    for (int i = 0; i < sizeRourd; ++i) os << '\t';
    if (sizeRourd > 1)
        os << "---\n";
    else {
        os << getPair()->getTeamList()[0]->getTitle() << endl;
        if (getPair()->getTeamList().size() == 2) {
            for (int i = 0; i < sizeRourd; ++i) os << '\t';
            os << getPair()->getTeamList()[1]->getTitle() << endl;
        }
    }
    if (getPrefRight() != nullptr) {
        getPrefRight()->print(os);
    }
}