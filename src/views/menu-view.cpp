#include "../../include/views/menu-view.h"
#include "../../include/controllers/utils-controller.h"
#include <iostream>

using namespace std;

void MenuView::displayMenu() {
    UtilsController::clearScreen();
    cout << "Welcome to Library" << endl;
    cout << "Please select the function you want to use:" << endl;
    cout << "1. Manage Readers" << endl;
    cout << "2. Manage Books" << endl;
    cout << "3. Manage Tickets (Borrows/Return)" << endl;
    cout << "4. Statistic" << endl;
    cout << "0. End the program" << endl;
}