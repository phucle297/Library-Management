#include "../../include/views/menu-view.h"
#include "../../include/controllers/utils-controller.h"
#include <iostream>

void MenuView::displayMenu() {
    UtilsController::clearScreen();
    std::cout << "Welcome to Library" << std::endl;
    std::cout << "Please select the function you want to use:" << std::endl;
    std::cout << "1. Manage Readers" << std::endl;
    std::cout << "2. Manage Books" << std::endl;
    std::cout << "3. Manage Tickets (Borrows/Return)" << std::endl;
    std::cout << "4. Statistic" << std::endl;
    std::cout << "0. End the program" << std::endl;
}