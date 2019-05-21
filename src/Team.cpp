#include "include/Team.h"

Team::Team(string title) : _title(std::move(title)) {
    _id = ID_STATIC++;
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