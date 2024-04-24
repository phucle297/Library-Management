//
// Created by phucle on 18/04/2024.
//

#include "iostream"
#include "set"
#include "algorithm"
#include "unordered_map"
#include "../../include/controllers/statistic-controller.h"
#include "../../include/controllers/utils-controller.h"
#include "../../include/controllers/menu-controller.h"
#include "../../include/views/book-view.h"
#include "../../include/views/reader-view.h"
#include "../../include/views/statistic-view.h"
#include "../../include/views/ticket-view.h"

using namespace std;

void StatisticController::handleUserChoice(int choice) {
    MenuController menuController{};

    switch (choice) {
        case 1: {
            listAllBooks();
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 2: {
            listBooksByGenre();
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 3: {
            listAllReaders();
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 4: {
            listReadersByGender();
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 5: {
            listBooksWereBorrowed();
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 6: {
            vector<Reader> overdueReaders = listOverdueReaders();
            if (!overdueReaders.empty()) {
                cout << "Overdue Readers:" << endl;
                ReaderView::viewReadersTable(overdueReaders);
            } else {
                cout << "No overdue readers found." << endl;
            }
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 7: {
            vector<Ticket> overdueTickets = listOverdueTickets();
            if (!overdueTickets.empty()) {
                cout << "Overdue Tickets:" << endl;
                TicketView::viewTicketsTable(overdueTickets);
            } else {
                cout << "No overdue tickets found." << endl;
            }
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 8: {
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        };
        case 0:
            UtilsController::clearScreen();
            MenuController::viewMenuAndExecute();
            break;
        default:
            // Xử lý lựa chọn không hợp lệ
            cout << "Invalid choice! Please try again." << endl;
            break;
    }
}

void StatisticController::viewMenuAndExecute() {
    StatisticView::displayStatisticMenu();

    int choice = UtilsController::getUserChoice();

    StatisticController::handleUserChoice(choice);
}

void StatisticController::listAllBooks() {
    cout << "Total books: " << booksData.size() << endl;

    BookView::viewBooksTable(booksData);
}

void StatisticController::listBooksByGenre() {
    set<string> genresSet;
    cout << endl;
    for (auto &book: booksData) {
        for (auto &genre: book.genre) {
            genresSet.insert(genre);
        }
    }
    int currentGenreIndex = 0;
    for (auto &genre: genresSet) {
        currentGenreIndex++;
        cout << "Books in genre \"" << genre << "\":" << endl;
        vector<Book> listBookMatchGenre;
        for (const auto &book: booksData) {
            if (find(book.genre.begin(), book.genre.end(), genre) != book.genre.end()) {
                listBookMatchGenre.push_back(book);
            }
        }
        BookView::viewBooksTable(listBookMatchGenre);
        if (currentGenreIndex != genresSet.size())
            cout
                    << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------"
                    << endl;
    }
}

void StatisticController::listAllReaders() {
    cout << "Total readers: " << readersData.size() << endl;

    ReaderView::viewReadersTable(readersData);
}

void StatisticController::listReadersByGender() {
    cout << endl;
    set<string> gendersSet;

    for (const auto &reader: readersData) {
        gendersSet.insert(reader.gender);
    }

    int currentGenderIndex = 0;
    int totalGenders = gendersSet.size();
    for (const auto &gender: gendersSet) {
        currentGenderIndex++;
        cout << "Gender \"" << gender << "\":" << endl;

        vector<Reader> readersByGender;
        for (const auto &reader: readersData) {
            if (reader.gender == gender) {
                readersByGender.push_back(reader);
            }
        }

        ReaderView::viewReadersTable(readersByGender);

        if (currentGenderIndex != totalGenders) {
            cout
                    << "-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"
                    << endl;
        }
    }
}

void StatisticController::listBooksWereBorrowed() {
    int totalBorrowedBooks = 0;
    unordered_map<string, int> isbnCounts;

    for (const auto &ticket: ticketsData) {
        if (ticket.returnDateActual.empty()) {
            for (const auto &bookStatus: ticket.listBookStatus) {
                totalBorrowedBooks++;
                isbnCounts[bookStatus.isbn]++;
            }
        }
    }

    cout << "Total books were borrowed: " << totalBorrowedBooks << endl;

    vector<Book> booksBorrowed;
    for (const auto &pair: isbnCounts) {
        for (const auto &book: booksData) {
            if (book.isbn == pair.first) {
                Book newBook(book.isbn, book.title, book.author, book.publisher, book.publicationYear, book.genre,
                             book.price, pair.second);
                booksBorrowed.push_back(newBook);
            }
        }
    }


    BookView::viewBooksTable(booksBorrowed);
}

vector<Ticket> StatisticController::listOverdueTickets() {
    string currentDate = UtilsController::getCurrentDate();
    vector<Ticket> overdueTickets;
    for (const Ticket &ticket: ticketsData) {
        bool isOverdueNotReturn =
                !ticket.returnDateActual.empty() && ticket.returnDateActual > ticket.returnDateExpected;
        bool isOverdueReturnLate = ticket.returnDateActual.empty() && currentDate > ticket.returnDateExpected;

        if (isOverdueNotReturn || isOverdueReturnLate) {
            overdueTickets.push_back(ticket);
        }
    }

    return overdueTickets;
}

vector<Reader> StatisticController::listOverdueReaders() {
    vector<Ticket> overdueTickets = listOverdueTickets();
    vector<Reader> overdueReaders;
    set<string> readerIds;
    for (const Ticket &ticket: overdueTickets) {
        readerIds.insert(ticket.readerId);
    }

    for (const Reader &reader: readersData) {
        if (readerIds.find(reader.id) != readerIds.end()) {
            overdueReaders.push_back(reader);
        }
    }

    return overdueReaders;
}
