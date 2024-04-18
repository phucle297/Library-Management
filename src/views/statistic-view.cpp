//
// Created by phucle on 18/04/2024.
//

#include "../../include/views/statistic-view.h"
#include "../../include/controllers/utils-controller.h"
#include "iostream"

void StatisticView::displayStatisticMenu() {
    UtilsController::clearScreen();
    std::cout << "Manage Statistic Menu:" << std::endl;
    std::cout << "1. View list of Books" << std::endl;
    std::cout << "2. View list of Books by genre" << std::endl;
    std::cout << "3. View list of Readers" << std::endl;
    std::cout << "4. View list of Readers by gender" << std::endl;
    std::cout << "5. View list of Books which borrowed" << std::endl;
    std::cout << "6. View list of overdue Readers." << std::endl;
    std::cout << "0. Return to main menu" << std::endl;
}
