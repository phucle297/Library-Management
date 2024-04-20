//
// Created by phucle on 18/04/2024.
//

#include "iostream"
#include "../../include/views/ticket-view.h"
#include "../../include/controllers/utils-controller.h"

using namespace std;

void TicketView::displayTicketMenu() {
    UtilsController::clearScreen();
    cout << "Manage Ticket Menu:" << endl;
    cout << "1. Create borrowing ticket" << endl;
    cout << "2. Create returning ticket" << endl;
}
