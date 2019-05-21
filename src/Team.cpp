#include "include/Team.h"

Team::Team(string title) : _title(std::move(title)) {}

const string &Team::getTitle() const {
    return _title;
}

void Team::setTitle(const string &title) {
    Team::_title = title;
}