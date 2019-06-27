#include <iostream>
#include "test/ConsoleTest.cpp"
#include "test/LogicTest.cpp"
#include "test/GraphTest.cpp"

int main() {
    LogicTest::createPairTest();
    LogicTest::createRoundTest();
    LogicTest::createTeamTest();

    std::cout<< "test LogicTest OK!\n";

    GraphTest::moveTextGraphX();
    GraphTest::moveTextGraphY();
    GraphTest::textViewWindow();

    std::cout<< "test GraphTest OK!\n";

    ConsoleTest::testMoveToItemOneItem();
    ConsoleTest::testMoveToItemTwoItem();
    ConsoleTest::testMoveToItemFourItem();

    std::cout<< "test ConsoleTest OK!\n";

    return 0;
}