//
// Created by phucle on 18/04/2024.
//

#include "iostream"
#include <iomanip>
#include "../../include/views/ticket-view.h"
#include "../../include/controllers/utils-controller.h"

using namespace std;

void TicketView::displayTicketMenu() {
    UtilsController::clearScreen();
    cout << "Manage Ticket Menu:" << endl;
    cout << "1. Create borrow ticket" << endl;
    cout << "2. Return books" << endl;
    cout << "3. View all tickets" << endl;
    cout << "4. Get ticket by id" << endl;
    cout << "5. Search ticket" << endl;
    cout << "6. Edit ticket" << endl;
    cout << "7. Delete ticket" << endl;
    cout << "0. Return to main menu" << endl;
}

void TicketView::viewTicketsTable(vector<Ticket> &tickets) {
    cout << left << setw(15) << "ID";
    cout << left << setw(15) << "Reader ID";
    cout << left << setw(15) << "Borrow Date";
    cout << left << setw(30) << "Return Date (Expected)";
    cout << left << setw(30) << "Return Date (Actual)";
    cout << left << setw(15) << "ISBN";
    cout << left << setw(10) << "Lost" << endl;

    for (const auto &ticket: tickets) {
        for (const auto &bookStatus: ticket.listBookStatus) {
            cout << left << setw(15) << ticket.id;
            cout << left << setw(15) << ticket.readerId;
            cout << left << setw(15) << ticket.borrowDate;
            cout << left << setw(30) << ticket.returnDateExpected;
            if (ticket.returnDateActual.empty()) {
                cout << left << setw(30) << "-";
            } else {
                cout << left << setw(30) << ticket.returnDateActual;
            }
            cout << left << setw(15) << bookStatus.isbn;
            if (ticket.returnDateActual.empty()) {
                cout << left << setw(10) << "-";
            } else {
                cout << left << setw(10) << (bookStatus.lost ? "Yes" : "No");
            }
            cout << endl;
        }
    }
}

void TicketView::viewTicketsTable(Ticket &ticket) {
    // Print table header
    cout << left << setw(15) << "ID";
    cout << left << setw(15) << "Reader ID";
    cout << left << setw(15) << "Borrow Date";
    cout << left << setw(30) << "Return Date (Expected)";
    cout << left << setw(30) << "Return Date (Actual)";
    cout << left << setw(15) << "ISBN";
    cout << left << setw(10) << "Lost" << endl;

    // Print each ticket as a row in the table
    for (const auto &bookStatus: ticket.listBookStatus) {
        cout << left << setw(15) << ticket.id;
        cout << left << setw(15) << ticket.readerId;
        cout << left << setw(15) << ticket.borrowDate;
        cout << left << setw(30) << ticket.returnDateExpected;
        if (ticket.returnDateActual.empty()) {
            cout << left << setw(30) << "-";
        } else {
            cout << left << setw(30) << ticket.returnDateActual;
        }
        cout << left << setw(15) << bookStatus.isbn;
        if (ticket.returnDateActual.empty()) {
            cout << left << setw(10) << "-";
        } else {
            cout << left << setw(10) << (bookStatus.lost ? "Yes" : "No");
        }
        cout << endl;
    }
}