//
// Created by phucle on 18/04/2024.
//

#include <iostream>
#include "../../include/controllers/ticket-controller.h"
#include "../../include/controllers/menu-controller.h"
#include "../../include/controllers/utils-controller.h"
#include "../../include/views/ticket-view.h"
using namespace std;

void TicketController::handleUserChoice(int choice) {
    switch (choice) {
        case 1: {
            string id, readerId, borrowDate, returnDateExpected;
            int numberOfBorrowBooks;
            vector<BookStatus> listBooks;
            cout << "Creating new borrow ticket..." << endl;

            cout << "Enter ID: ";
            cin >> id;

            cout << "Enter reader id: ";
            cin.ignore();
            getline(cin, readerId);

            cout << "Enter borrow date: ";
            getline(cin, borrowDate);

            cout << "Enter return date expected: ";
            getline(cin, returnDateExpected);

            cout << "Enter number of borrow book: ";
            cin >> numberOfBorrowBooks;
            listBooks.reserve(numberOfBorrowBooks);
            for (int i = 0; i < numberOfBorrowBooks; i++) {
                string isbn;
                cout << "Book " << i + 1 << ":" << endl;
                cout << "ISBN: ";
                cin >> isbn;
                listBooks.emplace_back(isbn, true);
            };
            Ticket newBorrowTicket(id, readerId, borrowDate, returnDateExpected, "", listBooks);
            createBorrowTicket(newBorrowTicket);

            cout << "Borrow ticket created!" << endl;
            UtilsController::shouldContinue(viewMenuAndExecute);

            break;
        }
        case 2:
            cout << "2";
            break;

        case 3: {
            vector<Ticket> tickets = getAllTickets();
            cout << "All Tickets" << endl;
            TicketView::viewTicketsTable(tickets);
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 4: {
            string ticketId;
            cout << "Enter the id of ticket you want to get: ";
            cin >> ticketId;
            vector<Ticket> tickets = getTicketById(ticketId);
            TicketView::viewTicketsTable(tickets);
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 5: {
            string searchValue;
            cout << "Enter value want to search: ";
            cin >> searchValue;

            vector<Ticket> foundTickets = searchTicket(searchValue);

            if (!foundTickets.empty()) {
                cout << "Ticket found!" << endl;
                TicketView::viewTicketsTable(foundTickets);
            } else {
                cout << "Not found." << endl;
            }
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        };
        case 6: {
            break;
        }
        case 7: {
            string idToDelete;
            cout << "Enter the id of the ticket you want to delete: ";
            cin >> idToDelete;
            deleteTicket(idToDelete);
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 0:
            UtilsController::clearScreen();
            MenuController::viewMenuAndExecute();
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
    }
}

void TicketController::viewMenuAndExecute() {
    TicketView::displayTicketMenu();

    int choice = UtilsController::getUserChoice();

    TicketController::handleUserChoice(choice);
}

vector<Ticket> TicketController::getAllTickets() {
    return ticketsData;
}

vector<Ticket> TicketController::getTicketById(string &ticketId) {
    vector<Ticket> foundTickets;
    for (const auto &ticket: ticketsData) {
        if (ticket.id.find(ticketId) != string::npos) {
            foundTickets.push_back(ticket);
        }
    }

    return foundTickets;
}

vector<Ticket> TicketController::searchTicket(string &searchValue) {
    vector<Ticket> foundTickets;
    for (const auto &ticket: ticketsData) {

        string idLowerCase = ticket.id;
        transform(idLowerCase.begin(), idLowerCase.end(), idLowerCase.begin(), ::tolower);

        string readerIdLowerCase = ticket.readerId;
        transform(readerIdLowerCase.begin(), readerIdLowerCase.end(), readerIdLowerCase.begin(), ::tolower);

        if (idLowerCase.find(searchValue) != string::npos || readerIdLowerCase.find(searchValue) != string::npos) {
            foundTickets.push_back(ticket);
        }
    }
    return foundTickets;
}

void TicketController::deleteTicket(string &ticketId) {
    bool found = false;

    for (auto it = ticketsData.begin(); it != ticketsData.end(); ++it) {
        if (it->id == ticketId) {
            found = true;
            ticketsData.erase(it);
            cout << "Book " << ticketId << " deleted!" << endl;
            break;
        }
    }

    if (!found) {
        cout << "Book with ISBN " << ticketId << " not found. Please try again." << endl;
    }
}

void TicketController::createBorrowTicket(Ticket &ticketToCreate) {
    ticketsData.push_back(ticketToCreate);
};