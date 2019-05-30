#include "LogicGridGeneration.h"


void LogicGridGeneration::prepare(Windows *windows) {

}

void LogicGridGeneration::render(Windows *windows) {
    text->render(windows);
}

void LogicGridGeneration::clear(Windows *windows) {

}

void LogicGridGeneration::set(Round *round) {
    text = new RoundGraph(round, 580, 240);
}

