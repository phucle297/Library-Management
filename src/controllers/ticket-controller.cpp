//
// Created by phucle on 18/04/2024.
//

#include "../../include/controllers/ticket-controller.h"
#include "../../include/controllers/utils-controller.h"
#include "../../include/controllers/menu-controller.h"
#include "../../include/views/ticket-view.h"
#include <iostream>

void TicketController::handleUserChoice(int choice) {
    MenuController menuController{};

    switch (choice) {
        case 1:
            std::cout << "1";
            break;
        case 2:
            std::cout << "2";
            break;
        default:
            // Xử lý lựa chọn không hợp lệ
            std::cout << "Invalid choice! Please try again." << std::endl;
            break;
    }
}

void TicketController::viewMenuAndExecute() {
    TicketView::displayTicketMenu();

    int choice = UtilsController::getUserChoice();

    TicketController::handleUserChoice(choice);
}

