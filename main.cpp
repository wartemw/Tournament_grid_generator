#include "Windows.h"
#include "LogicGridGeneration.h"

int main() {
    setlocale(LC_ALL, "Russian");
    auto *window = new Windows(new LogicGridGeneration);

    window->createDisplay(640, 480);

    return 0;
}