#include "../../include/controllers/utils-controller.h"
#include "iostream"
#include <cstdlib>

int UtilsController::getUserChoice() {
    int choice;
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    return choice;
}

void UtilsController::clearScreen() {
#ifdef WINDOWS
    std::system("cls");
#else
    std::system("clear");
#endif
}
