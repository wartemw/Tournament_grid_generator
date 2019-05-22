#include "TextGraph.h"

string TextGraph::getText() {
    return text;
}

void TextGraph::setText(string text) {
    TextGraph::text = text;
}

int TextGraph::getX() const {
    return x;
}

void TextGraph::setX(int x) {
    TextGraph::x = x;
}

int TextGraph::getY() const {
    return y;
}

void TextGraph::setY(int y) {
    TextGraph::y = y;
}
