//
// Created by phucle on 18/04/2024.
//

#include <iostream>
#include <ctime> // for getting current date and time
#include "../../include/controllers/ticket-controller.h"
#include "../../include/controllers/utils-controller.h"
#include "../../include/controllers/menu-controller.h"
#include "../../include/views/ticket-view.h"
#include "../../include/models/ticket-model.h"

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

void TicketController::createBorrowTicket() {
    string readerId;
    string borrowDate;
    string returnDateExpected;

    // Get current date as borrow date
    time_t now = time(0);
    tm *ltm = localtime(&now);
    borrowDate = to_string(1900 + ltm->tm_year) + '-' + to_string(1 + ltm->tm_mon) + '-' + to_string(ltm->tm_mday);

    cout << "Enter reader ID: ";
    cin >> readerId;
    cout << "Enter expected return date (YYYY-MM-DD): ";
    cin >> returnDateExpected;

    // Get book list
    vector<pair<string, bool>> bookList;
    // Code to get book list goes here...

    // Create new ticket
    Ticket newTicket(readerId, borrowDate, returnDateExpected, "", bookList);
    ticketsData.push_back(newTicket);

    cout << "Borrow ticket created successfully!" << endl;
}

void TicketController::returnBooks() {
    string readerId;
    string returnDateActual;

    cout << "Enter reader ID: ";
    cin >> readerId;
    cout << "Enter actual return date (YYYY-MM-DD): ";
    cin >> returnDateActual;

    // Find corresponding ticket in ticketsData
    for (auto &ticket : ticketsData) {
        if (ticket.readerId == readerId && ticket.returnDateActual.empty()) {
            ticket.returnDateActual = returnDateActual;
            cout << "Books returned successfully!" << endl;
            return;
        }
    }

    cout << "No active borrow ticket found for reader " << readerId << endl;
}