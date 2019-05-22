#include "TeamGraph.h"

TeamGraph::TeamGraph(Team *team, int x, int y) {
    string text = to_string(team->getId()) + ": " + team->getTitle();
    textGraph = new TextGraph(text, x, y);
}

void TeamGraph::render(Windows *windows) {
    textGraph->render(windows);
}