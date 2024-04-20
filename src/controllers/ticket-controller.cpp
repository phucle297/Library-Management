//
// Created by phucle on 18/04/2024.
//

#include "../../include/controllers/ticket-controller.h"
#include "../../include/controllers/utils-controller.h"
#include "../../include/controllers/menu-controller.h"
#include "../../include/views/ticket-view.h"
#include <iostream>

using namespace std;

void TicketController::handleUserChoice(int choice) {
    MenuController menuController{};

    switch (choice) {
        case 1:
            cout << "1";
            break;
        case 2:
            cout << "2";
            break;
        default:
            // Xử lý lựa chọn không hợp lệ
            cout << "Invalid choice! Please try again." << endl;
            break;
    }
}

void TicketController::viewMenuAndExecute() {
    TicketView::displayTicketMenu();

    int choice = UtilsController::getUserChoice();

    TicketController::handleUserChoice(choice);
}

