//
// Created by phucle on 18/04/2024.
//

#include "iostream"
#include "../../include/views/statistic-view.h"
#include "../../include/controllers/utils-controller.h"

using namespace std;

void StatisticView::displayStatisticMenu() {
    UtilsController::clearScreen();
    cout << "Manage Statistic Menu:" << endl;
    cout << "1. View list of Books" << endl;
    cout << "2. View list of Books by genre" << endl;
    cout << "3. View list of Readers" << endl;
    cout << "4. View list of Readers by gender" << endl;
    cout << "5. View list of Books which borrowed" << endl;
    cout << "6. View list of overdue Readers." << endl;
    cout << "0. Return to main menu" << endl;
}
