//
// Created by phucle on 18/04/2024.
//

#include "iostream"
#include <iomanip>
#include "../../include/views/book-view.h"
#include "../../include/controllers/utils-controller.h"

using namespace std;

void BookView::displayBookMenu() {
    UtilsController::clearScreen();
    cout << "Manage Books Menu:" << endl;
    cout << "1. View list of books" << endl;
    cout << "2. Add book" << endl;
    cout << "3. Edit book information" << endl;
    cout << "4. Delete book" << endl;
    cout << "5. Search by ISBN" << endl;
    cout << "6. Search by name" << endl;
    cout << "7. General search" << endl;
    cout << "0. Return to main menu" << endl;
}

void BookView::viewBooksTable(const vector<Book> &books) {
    cout << left << setw(15) << "ISBN";
    cout << left << setw(25) << "Title";
    cout << left << setw(25) << "Author";
    cout << left << setw(35) << "Publisher";
    cout << left << setw(10) << "Year";
    cout << left << setw(35) << "Genre";
    cout << left << setw(10) << "Price";
    cout << left << setw(10) << "Quantity" << endl;

    for (const auto &book: books) {
        cout << left << setw(15) << book.isbn;
        cout << left << setw(25) << book.title;
        cout << left << setw(25) << book.author;
        cout << left << setw(35) << book.publisher;
        cout << left << setw(10) << book.publicationYear;

        string genreStr;
        for (const auto &genre: book.genre) {
            genreStr += genre + ", ";
        }
        genreStr = genreStr.substr(0, genreStr.size() - 2);
        cout << left << setw(35) << genreStr;
        cout << left << setw(10) << book.price;
        cout << left << setw(10) << book.quantity << endl;
    }
}
