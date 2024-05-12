//
// Created by phucle on 18/04/2024.
//

#include <iostream>
#include <sstream>
#include <set>
#include "algorithm"
#include "../../include/controllers/ticket-controller.h"
#include "../../include/controllers/menu-controller.h"
#include "../../include/controllers/utils-controller.h"
#include "../../include/views/ticket-view.h"
#include "../../include/views/book-view.h"
#include "../../include/controllers/book-controller.h"

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

            set<string> bookIds;

            for (int i = 0; i < numberOfBorrowBooks; i++) {
                string isbn;
                cout << "Book " << i + 1 << ":" << endl;
                cout << "ISBN: ";
                cin >> isbn;
                listBooks.emplace_back(isbn, true);
                bookIds.insert(isbn);
            };
            Ticket newBorrowTicket(id, readerId, borrowDate, returnDateExpected, "", listBooks);
            createBorrowTicket(newBorrowTicket);
            for (Book &book: booksData) {
                if (bookIds.find(book.isbn) != bookIds.end()) {
                    book.quantity--;
                }
            }

            cout << "Borrow ticket created!" << endl;
            UtilsController::shouldContinue(viewMenuAndExecute);

            break;
        }
        case 2: {
            string ticketId;
            cout << "Enter the ID of the ticket to return books: ";
            cin >> ticketId;

            string returnDateActual;
            cout << "Enter actual return date (YYYY-MM-DD): ";
            cin >> returnDateActual;

            int numberOfLostBooks;
            cout << "Enter the number of lost books: ";
            cin >> numberOfLostBooks;

            vector<string> lostBooks;
            for (int i = 0; i < numberOfLostBooks; ++i) {
                string isbn;
                cout << "Enter ISBN of lost book " << i + 1 << ": ";
                cin >> isbn;
                lostBooks.push_back(isbn);
            }
            set<string> remainingBooks;
            for (const Ticket &ticket: ticketsData) {
                if (ticketId == ticket.id) {
                    for (const BookStatus &bs: ticket.listBookStatus) {
                        if (find(lostBooks.begin(), lostBooks.end(), bs.isbn) == lostBooks.end()) {
                            remainingBooks.insert(bs.isbn);
                        }
                    }
                }
            }

            for (Book &book: booksData) {
                if (remainingBooks.find(book.isbn) != remainingBooks.end()) {
                    book.quantity++;
                }
            }

            Ticket returnedTicket = returnBooks(ticketId, returnDateActual, lostBooks);

            if (!returnedTicket.id.empty()) {
                cout << "Books returned successfully!" << endl;
                TicketView::viewTicketsTable({returnedTicket});
            } else {
                cout << "Ticket with ID " << ticketId << " not found. Please try again." << endl;
            }

            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }

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
            string id, readerId, borrowDate, returnDateExpected, returnDateActual;
            int numberOfBorrowBooks;
            vector<BookStatus> listBooks;
            cout << "Edit borrow ticket..." << endl;

            cout << "Enter ticket ID: ";
            cin >> id;

            bool flag = false;
            for (auto &ticket: ticketsData) {
                if (ticket.id == id) {
                    flag = true;
                    cout << "Current data of ticket  " << id << endl;
                    TicketView::viewTicketsTable(ticket);

                    cout << "Enter updated reader id: ";
                    cin.ignore();
                    getline(cin, readerId);

                    if (readerId.empty()) {
                        readerId = ticket.readerId;
                    }

                    cout << "Enter updated borrow date: ";
                    getline(cin, borrowDate);
                    if (borrowDate.empty()) {
                        borrowDate = ticket.borrowDate;
                    }

                    cout << "Enter updated return date expected: ";
                    getline(cin, returnDateExpected);
                    if (returnDateExpected.empty()) {
                        returnDateExpected = ticket.returnDateExpected;
                    }

                    cout << "Enter updated return date actual: ";
                    getline(cin, returnDateActual);
                    if (returnDateActual.empty()) {
                        returnDateActual = ticket.returnDateActual;
                    }

                    cout << "Enter updated number of borrow book: ";
                    cin >> numberOfBorrowBooks;
                    listBooks.reserve(numberOfBorrowBooks);
                    for (int i = 0; i < numberOfBorrowBooks; i++) {
                        string isbn;
                        bool lost;
                        cout << "Book " << i + 1 << ":" << endl;
                        cout << "ISBN: ";
                        cin >> isbn;
                        cout << "Is lost (1: Yes, 0: No): ";
                        cin >> lost;
                        listBooks.emplace_back(isbn, lost);
                    };
                    Ticket updatedTicket(id, readerId, borrowDate, returnDateExpected, returnDateActual, listBooks);
                    updateTicketById(id, updatedTicket);

                    cout << "Ticket " << id << " updated!" << endl;
                }
            }

            if (!flag) {
                cout << "Ticket with ID " << id << " not found. Please try again." << endl;
            }
            UtilsController::shouldContinue(viewMenuAndExecute);

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
    UtilsController::writeDataToFile(BOOKS_DATA_PATH, BookController::writeBooksToFile);
    UtilsController::writeDataToFile(TICKETS_DATA_PATH, writeTicketsToFile);
}

void TicketController::createBorrowTicket(Ticket &ticketToCreate) {
    ticketsData.push_back(ticketToCreate);
    UtilsController::writeDataToFile(TICKETS_DATA_PATH, writeTicketsToFile);
    UtilsController::writeDataToFile(BOOKS_DATA_PATH, BookController::writeBooksToFile);
};

Ticket TicketController::returnBooks(string &ticketId, string &returnDateActual,
                                     vector<string> &lostBooks) {
    for (auto &ticket: ticketsData) {
        if (ticket.id == ticketId) {
            ticket.returnDateActual = returnDateActual;

            for (auto &bookStatus: ticket.listBookStatus) {
                if (find(lostBooks.begin(), lostBooks.end(), bookStatus.isbn) != lostBooks.end()) {
                    bookStatus.lost = true;
                } else {
                    bookStatus.lost = false;
                }
            }
            UtilsController::writeDataToFile(TICKETS_DATA_PATH, writeTicketsToFile);
            UtilsController::writeDataToFile(BOOKS_DATA_PATH, BookController::writeBooksToFile);
            return ticket;
        }
    }
    UtilsController::writeDataToFile(TICKETS_DATA_PATH, writeTicketsToFile);
    UtilsController::writeDataToFile(BOOKS_DATA_PATH, BookController::writeBooksToFile);
    return Ticket("", "", "", "", "", {});
}

Ticket TicketController::updateTicketById(string &ticketId, Ticket &updatedTicket) {
    for (auto &ticket: ticketsData) {
        if (ticket.id == ticketId) {
            ticket = updatedTicket;
            UtilsController::writeDataToFile(TICKETS_DATA_PATH, writeTicketsToFile);
            return ticket;
        }
    }
    UtilsController::writeDataToFile(TICKETS_DATA_PATH, writeTicketsToFile);
    return Ticket("", "", "", "", "", {});
}

void TicketController::parseTickets(FILE *fp) {
    vector<Ticket> ticketsDataFromFile;

    char id[100], readerId[100], borrowDate[30], returnDateExpected[30], returnDateActual[30], isbn[20], lost[5];

    while (fscanf(fp, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n", id, readerId, borrowDate, returnDateExpected,
                  returnDateActual, isbn, lost) != EOF) {
        bool isBookLost = strcmp(lost, "true") == 0;
        vector<BookStatus> bookStatuses;
        bookStatuses.emplace_back(isbn, isBookLost);

        bool isBookExists = false;
        for (auto &ticket: ticketsDataFromFile) {
            if (ticket.id == id) {
                ticket.listBookStatus.emplace_back(isbn, isBookLost);
                isBookExists = true;
                break;
            }
        }

// char to string

        stringstream ss;
        ss << returnDateActual;
        string returnDateActualString;
        ss >> returnDateActualString;

        if (!isBookExists) {
            ticketsDataFromFile.emplace_back(id, readerId, borrowDate, returnDateExpected,
                                             returnDateActualString, bookStatuses);
        }
    }

    ticketsData = ticketsDataFromFile;
}

void TicketController::writeTicketsToFile(FILE *fp) {
    for (const auto &ticket: ticketsData) {
        const char *returnDateActual = ticket.returnDateActual.empty() ? " " : ticket.returnDateActual.c_str();
        for (const auto &bookStatus: ticket.listBookStatus) {
            fprintf(fp, "%s,%s,%s,%s,%s,%s,%s\n", ticket.id.c_str(), ticket.readerId.c_str(),
                    ticket.borrowDate.c_str(),
                    ticket.returnDateExpected.c_str(), returnDateActual, bookStatus.isbn.c_str(),
                    bookStatus.lost ? "true" : "false");
        }
    }
}