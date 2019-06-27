#ifndef TOURNAMENT_GRID_GENERATOR_CONSOLE_H
#define TOURNAMENT_GRID_GENERATOR_CONSOLE_H

#include "include/Stdaf.h"
#include "GridManager.h"
#include "Team.h"
#include <cstdlib>

class Console {
    void clearScreen() {
#ifdef WINDOWS
        std::system("cls");
#else
        std::system("clear");
#endif
    }

    GridManager manager;
public:
    void menu();

    bool moveToItem(int num);
    bool moveToitem(int num);

    void createGrid();

    void info();
};


#endif //TOURNAMENT_GRID_GENERATOR_CONSOLE_H