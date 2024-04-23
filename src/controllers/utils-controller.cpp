#include "../../include/controllers/utils-controller.h"
#include "iostream"

using namespace std;

int UtilsController::getUserChoice() {
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}

void UtilsController::clearScreen() {
#ifdef WIN32
    system("cls");
#else
    system("clear");
#endif
}

void UtilsController::stopBeforeCloseConsole() {
#ifdef WIN32
    system("pause");
#else
    system("read");
#endif
}

void UtilsController::shouldContinue(void (*callback)()) {
    cout << "Do you want to continue? (Y/N)" << endl;
    char flag;
    cin >> flag;

    if (flag == 'y' || flag == 'Y') {
        callback();
    }
}
