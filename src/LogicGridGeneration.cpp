#include "LogicGridGeneration.h"

void LogicGridGeneration::prepare(Windows *windows) {
    int y = windows->getHeight() / 2;
    Team *one = new Team("test");
    Team *two = new Team("hello");

    Team *oneL = new Team("tii");
    Team *twoL = new Team("bii");

    Team *oneLL = new Team("tii");
    Team *twoLL = new Team("bii");

    Round *round = new Round;
    Round *roundL = new Round;
    Round *roundLL = new Round;
    round->setPair(new Pair(one, two));
    roundL->setPair(new Pair(oneL, twoL));
    roundLL->setPair(new Pair(oneLL));


    round->setPrefLeft(roundL);
    roundL->setPrefLeft(roundLL);

    text = new RoundGraph(round, 580, 240);

}

void LogicGridGeneration::render(Windows *windows) {
    text->render(windows);
}

void LogicGridGeneration::clear(Windows *windows) {

}
