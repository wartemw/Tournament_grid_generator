#include "RoundGraph.h"

RoundGraph::RoundGraph(Round *root, int x, int y) {
    this->root = root;
    init(this, x, y);
}

void RoundGraph::init(RoundGraph *root, int x, int y) {
    root->_pair = new PairGraph(root->root->getPair(), x, y);

    if (root->root->getPrefLeft() != nullptr) {
        RoundGraph *child = new RoundGraph(root->root->getPrefLeft(), x, y);
        root->_prefLeft = child;
        init(child, x - 70, y - 20);
    }
    if (root->root->getPrefRight() != nullptr) {
        RoundGraph *child = new RoundGraph(root->root->getPrefRight(), x, y);
        root->_prefRight = child;
        init(child, x - 70, y + 20);
    }
}