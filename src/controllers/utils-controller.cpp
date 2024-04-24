#include "iostream"
#include "chrono"
#include "cstdio"
#include "../../include/controllers/utils-controller.h"

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

string UtilsController::getCurrentDate() {
    time_t rawtime;
    tm *timeinfo;
    char buffer[10];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, 80, "%Y-%m-%d", timeinfo);
    return buffer;
}