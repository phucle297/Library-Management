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
#ifdef WIN32
    std::system("cls");
#else
    std::system("clear");
#endif
}

void UtilsController::stopBeforeCloseConsole() {
#ifdef WIN32
    std::system("pause");
#else
    std::system("read");
#endif
}

void UtilsController::shouldContinue(void (*callback)()) {
    std::cout << "Do you want to continue? (Y/N)" << std::endl;
    char flag;
    std::cin >> flag;

    if (flag == 'y' || flag == 'Y') {
        callback();
    }
}
