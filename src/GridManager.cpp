#include "GridManager.h"

void GridManager::addTeam(Team *team) {
    _teamList.push_back(team);
}

void GridManager::setType(int type) {
    _type = type;
}