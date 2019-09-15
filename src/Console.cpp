#include "Console.h"

void Console::menu() {
    int num = 0;
    while (true) {
        clearScreen();
        cout << "Меню: " << endl;
        cout << "\t" << "1) " << "создать сетку," << endl;
        cout << "\t" << "2) " << "просмотр в консоле," << endl;
        cout << "\t" << "3) " << "выход." << endl;
        cout << "Введите номер для перехода: ";

        while (!(cin >> num)) {
            cin.clear();
            cin.get();
            break;
        }

        if (moveToItem(num)) break;
    }
}

bool Console::moveToItem(int num) {
    switch (num) {
        case 1:
            createGrid();
            return false;
        case 2:
            info();
            return false;
        case 3:
            cout << "До встречи." << endl;
            return true;
        default:
            cout << "нет " << num << " пункта!" << endl;
            return false;
    }
}

bool Console::moveToitem(int num) {
    switch (num) {
        case 1:
            //createGrid();
            return false;
        case 2:
            //info();
            return false;
        case 3:
            //window->getLogicProgram()->set(manager.getRoot());
            //window->createDisplay(640, 480);
            return false;
        case 4:
            //cout << "До встречи." << endl;
            return true;
        default:
            cout << "нет " << num << " пункта!" << endl;
            return false;
    }
}

void Console::createGrid() {
    int num;
    int sizeTeam;
    string nameTeam;
    clearScreen();
    cout << "Выберите тип сетки:" << endl;
    cout << "\t" << "1) " << "одиночное исключение," << endl;
    cout << "\t" << "2) " << "информация о типах," << endl;
    cout << "\t" << "3) " << "назад," << endl;
    cout << "Введите номер для перехода: ";

    while (!(cin >> num)) {
        cin.clear();
        cin.get();
        break;
    }

    switch (num) {
        case 1:
            //manager.setType(GridManager::SINGLE_ELIMINATION);
            break;
        case 2:
            break;
        case 3:
            return;
        default:
            cout << "нет " << num << " пункта!" << endl;
            return;
    }

    do {
        clearScreen();
        cout << "Введите колличество комманд: ";
        while (!(cin >> sizeTeam)) {
            cin.clear();
            cin.get();
            break;
        }
        if (sizeTeam < 2)
            cout << "Команд должно быть больше 2!" << endl;
    } while (sizeTeam < 2);


    for (int i = 0; i < sizeTeam; ++i) {
        clearScreen();
        cout << "Введние навзвание команды номер[" << i + 1 << " из " << sizeTeam << "] : ";
        cin.ignore();
        cin >> nameTeam;
        manager.addTeam(new Team(nameTeam));
    }
    manager.createGrid();
}

void Console::info() {
    manager.printGrid();
}