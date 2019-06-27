#include "include/Team.h"

Team::Team(string title) : _title(std::move(title)) {

}

const string &Team::getTitle() const {
    return _title;
}

void Team::setTitle(const string &title) {
    Team::_title = title;
}

int Team::getId() const {
    return _id;
}

unsigned int Team::getNumWin() const {
    return _numWin;
}

void Team::setNumWin(unsigned int numWin) {
    Team::_numWin = numWin;
}