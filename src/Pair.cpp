#include "Pair.h"

const vector<Team *> &Pair::getTeamList() const {
    return _teamList;
}

Team *Pair::getWinner() const {
    return _winner;
}

void Pair::setWinner(Team *winner) {
    _winner = winner;
}

Team *Pair::getLoser() const {
    return _loser;
}

void Pair::setLoser(Team *loser) {
    _loser = loser;
}