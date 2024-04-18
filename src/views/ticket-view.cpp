//
// Created by phucle on 18/04/2024.
//

#include "../../include/views/ticket-view.h"
#include "../../include/controllers/utils-controller.h"
#include "iostream"

void TicketView::displayTicketMenu() {
    UtilsController::clearScreen();
    std::cout << "Manage Ticket Menu:" << std::endl;
    std::cout << "1. Create borrowing ticket" << std::endl;
    std::cout << "2. Create returning ticket" << std::endl;
}
