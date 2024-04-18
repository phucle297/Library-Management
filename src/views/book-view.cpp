//
// Created by phucle on 18/04/2024.
//
#include "../../include/views/book-view.h"
#include "../../include/controllers/utils-controller.h"
#include "iostream"
#include <iomanip>

void BookView::displayBookMenu() {
    UtilsController::clearScreen();
    std::cout << "Manage Books Menu:" << std::endl;
    std::cout << "1. View list of books" << std::endl;
    std::cout << "2. Add book" << std::endl;
    std::cout << "3. Edit book information" << std::endl;
    std::cout << "4. Delete book" << std::endl;
    std::cout << "5. Search by ISBN" << std::endl;
    std::cout << "6. Search by name" << std::endl;
    std::cout << "7. General search" << std::endl;
    std::cout << "0. Return to main menu" << std::endl;
}

void BookView::viewBooksTable(const std::vector<Book> &books) {
    // Print table header
    std::cout << std::left << std::setw(15) << "ISBN";
    std::cout << std::left << std::setw(25) << "Title";
    std::cout << std::left << std::setw(25) << "Author";
    std::cout << std::left << std::setw(35) << "Publisher";
    std::cout << std::left << std::setw(10) << "Year";
    std::cout << std::left << std::setw(35) << "Genre";
    std::cout << std::left << std::setw(10) << "Price";
    std::cout << std::left << std::setw(10) << "Quantity" << std::endl;

    // Print each book as a row in the table
    for (const auto &book: books) {
        std::cout << std::left << std::setw(15) << book.isbn;
        std::cout << std::left << std::setw(25) << book.title;
        std::cout << std::left << std::setw(25) << book.author;
        std::cout << std::left << std::setw(35) << book.publisher;
        std::cout << std::left << std::setw(10) << book.publicationYear;

        // Format genre as a comma-separated string
        std::string genreStr;
        for (const auto &genre: book.genre) {
            genreStr += genre + ", ";
        }
        genreStr = genreStr.substr(0, genreStr.size() - 2); // Remove the trailing comma and space
        std::cout << std::left << std::setw(35) << genreStr;
        std::cout << std::left << std::setw(10) << book.price;
        std::cout << std::left << std::setw(10) << book.quantity << std::endl;
    }
}
