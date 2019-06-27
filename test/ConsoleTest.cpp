#include <include/Console.h>
#include <cassert>

class ConsoleTest {
public:

    static void testMoveToItemOneItem() {
        Console console;
        assert(true != console.moveToitem(1));
    }

    static void testMoveToItemTwoItem() {
        Console console;
        assert(true != console.moveToitem(2));
    }

    static void testMoveToItemFourItem() {
        Console console;
        assert(true == console.moveToitem(4));
    }
};