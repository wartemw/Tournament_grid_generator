#include <iostream>
#include "test/ConsoleTest.cpp"
#include "test/LogicTest.cpp"

int main() {
    LogicTest::createPairTest();
    LogicTest::createRoundTest();
    LogicTest::createTeamTest();

    std::cout<< "test LogicTest OK!\n";

    ConsoleTest::testMoveToItemOneItem();
    ConsoleTest::testMoveToItemTwoItem();
    ConsoleTest::testMoveToItemFourItem();

    std::cout<< "test ConsoleTest OK!\n";

    return 0;
}