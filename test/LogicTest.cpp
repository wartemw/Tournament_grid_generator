#include <include/Console.h>
#include <cassert>

class LogicTest {
public:

    static void createPairTest() {
        Pair pair;
        assert(pair.getLoser() == nullptr);
        assert(pair.getWinner() == nullptr);
        assert(pair.getTeamList().size() == 0);
    }

    static void createRoundTest() {
        Round round;
        assert(round.getPrefLeft() == nullptr);
        assert(round.getPrefRight() == nullptr);
        assert(round.getNext() == nullptr);
        assert(round.getSizeRourd() == 0);
    }

    static void createTeamTest() {
        Team team("");
        assert(team.getId() == 1);
        assert(team.getId() == 1);
        assert(team.getTitle() == "");
    }


};