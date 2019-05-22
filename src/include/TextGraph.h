#ifndef TOURNAMENT_GRID_GENERATOR_TEXTGRAPH_H
#define TOURNAMENT_GRID_GENERATOR_TEXTGRAPH_H

#include "Stdaf.h"

class TextGraph {
private:
    string text;
    int x;
    int y;
public:
    TextGraph(const string &text, int x, int y);

    string getText();

    void setText(string text);

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);
};

#endif //TOURNAMENT_GRID_GENERATOR_TEXTGRAPH_H
