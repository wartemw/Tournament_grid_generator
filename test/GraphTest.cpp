#include <include/Console.h>
#include <include/TextGraph.h>
#include <cassert>

class GraphTest {
public:
    static void moveTextGraphX() {
        TextGraph textGraph("",0,0);
        textGraph.setX(100);
        assert(textGraph.getX() == 100);
    }

    static void moveTextGraphY() {
        TextGraph textGraph("",0,0);
        textGraph.setY(500);
        assert(textGraph.getY() == 500);
    }

    static void textViewWindow() {
        TextGraph textGraph("Hello world!",0,0);
        assert(strcmp(textGraph.getText().c_str(), "Hello world!") == 0);
    }
};