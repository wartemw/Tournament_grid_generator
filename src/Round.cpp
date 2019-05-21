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
