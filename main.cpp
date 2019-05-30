#include "Console.h"

int main() {

    setlocale(LC_ALL, "Russian");
    cout << "Приведствую в генерации турнирной сетки!" << endl;
    Console cons;
    cons.menu();
    return 0;
}