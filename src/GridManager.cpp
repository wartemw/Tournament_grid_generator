#include "GridManager.h"

void GridManager::addTeam(Team *team) {
    _teamList.push_back(team);
}

void GridManager::setType(int type) {
    _type = type;
}

void GridManager::createGrid() {
    int sizeRound = log2(_teamList.size());
    int maxSizePair = pow(2, sizeRound - 1);
    int maxPair = pow(2, sizeRound);
    int ostPair = (maxPair / 2);
    int maxOneTeam;
    if (_teamList.size() < (maxPair + ostPair))
        maxOneTeam = _teamList.size() - maxPair;
    else
        maxOneTeam = ostPair - ((_teamList.size() - maxPair) - ostPair);

    int sizePair = (_teamList.size() - maxOneTeam) / 2;

    // bool cred =
    int index = 0;
    root = getRound(sizeRound, maxOneTeam, sizePair, index, sizePair > maxSizePair);
}

void GridManager::printGrid() {
    root->print(cout);
}

Round *GridManager::getRound(int sizeRound, int &team, int &pair, int &index, bool max) {
    auto *result = new Round;
    result->setSizeRourd(sizeRound--);
    if (sizeRound > 0) {
        result->setPrefLeft(getRound(sizeRound, team, pair, index, max));
        result->getPrefLeft()->setNext(result);

        result->setPrefRight(getRound(sizeRound, team, pair, index, max));
        result->getPrefRight()->setNext(result);

    }
    if (sizeRound == 0)
        if (team > 0 && pair > 0) {
            team--;
            pair--;

            result->setPair(new Pair(_teamList[index++]));

            result->setPrefRight(new Round);
            result->getPrefRight()->setNext(result);
            result->getPrefRight()->setSizeRourd(0);
            auto one = _teamList[index++];
            result->getPrefRight()->setPair(new Pair(one, _teamList[index++]));

        } else if (team == 0 && pair > 0) {
            if (!max) {
                pair--;
                auto one = _teamList[index++];
                result->setPair(new Pair(one, _teamList[index++]));
            } else {
                pair--;
                result->setPrefLeft(new Round);
                result->getPrefLeft()->setNext(result);
                result->getPrefLeft()->setSizeRourd(0);
                auto one = _teamList[index++];
                result->getPrefLeft()->setPair(new Pair(one, _teamList[index++]));

                result->setPrefRight(new Round);
                result->getPrefRight()->setNext(result);
                result->getPrefRight()->setSizeRourd(0);
                one = _teamList[index++];
                result->getPrefRight()->setPair(new Pair(one, _teamList[index++]));

            }
        }
    return result;
}