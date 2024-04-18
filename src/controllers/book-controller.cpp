//
// Created by phucle on 18/04/2024.
//

#include "../../include/controllers/book-controller.h"
#include <algorithm>
#include "../../include/controllers/utils-controller.h"
#include "../../include/controllers/menu-controller.h"
#include "../../include/views/book-view.h"
#include "../../include/models/book-model.h"
#include <iostream>
#include <sstream>

void BookController::handleUserChoice(int choice) {
    MenuController menuController{};
    UtilsController utilsController;
    switch (choice) {
        case 1: {
            std::vector<Book> books = getAllBooks();
            std::cout << "All Books" << std::endl;
            BookView::viewBooksTable(books);
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 2: {
            std::string isbn, title, author, publisher;
            int publicationYear, quantity;
            double price;
            std::vector<std::string> genre;
            std::cout << "Creating new book..." << std::endl;

            std::cout << "Enter ISBN: ";
            std::cin >> isbn;
            std::cout << "Enter title: ";
            std::cin.ignore(); // Ignore the newline character left in the input buffer
            std::getline(std::cin, title); // using getline for non white-space
            std::cout << "Enter author: ";
            std::getline(std::cin, author);
            std::cout << "Enter publisher: ";
            std::getline(std::cin, publisher);
            std::cout << "Enter publication year: ";
            std::cin >> publicationYear;
            std::cout << "Enter quantity: ";
            std::cin >> quantity;
            std::cout << "Enter price: ";
            std::cin >> price;

            std::string genreStr;
            std::cout << "Enter genres (comma-separated): ";
            std::cin.ignore(); // Ignore the newline character left in the input buffer
            std::getline(std::cin, genreStr);

            std::istringstream iss(genreStr); // sperate genres
            std::string genreToken;
            while (std::getline(iss, genreToken, ',')) {
                genre.push_back(genreToken);
            }

            // Create a new Book object with the provided information
            Book newBook(isbn, title, author, publisher, publicationYear, genre, price, quantity);

            // Add the new book to your data store (e.g., bookData)
            bookData.push_back(newBook);

            // Optionally, display a message to confirm that the book has been successfully added
            std::cout << "Book added successfully!" << std::endl;

            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 3:
            // Xử lý chức năng quản lí phiếu mượn/trả sách
            // Gọi các hàm ho   ặc class cần thiết ở đây
            std::cout << "3";
            break;
        case 4:
            // Xử lý chức năng thống kê
            // Gọi các hàm hoặc class cần thiết ở đây
            std::cout << "4";
            break;

        case 5: {
            std::string isbn;
            std::cout << "Search by ISBN:";
            std::cin >> isbn;
            std::vector<Book> books = getBookByISBN(isbn);
            if (!books.empty()) {
                std::cout << "Books find by ISBN" << std::endl;
                BookView::viewBooksTable(books);
            } else {
                std::cout << "Not found!" << std::endl;
            }
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }

        case 6:
            // Xử lý chức năng thống kê
            // Gọi các hàm hoặc class cần thiết ở đây
            std::cout << "4";
            break;

        case 7:
            // Xử lý chức năng thống kê
            // Gọi các hàm hoặc class cần thiết ở đây
            std::cout << "4";
            break;
        case 0:
            UtilsController::clearScreen();
            MenuController::viewMenuAndExecute();
            break;
        default:
            // Xử lý lựa chọn không hợp lệ
            std::cout << "Invalid choice! Please try again." << std::endl;
            UtilsController::shouldContinue(viewMenuAndExecute);

            break;
    }
}

void BookController::viewMenuAndExecute() {
    BookView::displayBookMenu();

    int choice = UtilsController::getUserChoice();

    handleUserChoice(choice);
}

std::vector<Book> BookController::getAllBooks() {
    return bookData;
}

void BookController::postBook(const Book &newBook) {
    bookData.push_back(newBook);
}


std::vector<Book> BookController::getBookByISBN(const std::string &isbn) {
    std::vector<Book> foundBooks;
    for (const auto &book: bookData) {
        if (book.isbn.find(isbn) != std::string::npos) {
            // like null in js
            foundBooks.push_back(book);
        }
    }
    return foundBooks;
}

// void BookController::deleteBook(const std::string &isbn) {
//     bookData.erase(std::remove_if(bookData.begin(), bookData.end(), [&](const Book &book) {
//         return book.isbn == isbn;
//     }), bookData.end());
// }
//
// std::vector<Book> BookController::getBookByName(const std::string& name) {
//     std::vector<Book> foundBooks;
//     for (const auto& book : bookData) {
//         if (book.title == name) {
//             foundBooks.push_back(book);
//         }
//     }
//     return foundBooks;
// }
//

// void BookController::updateBook(const std::string& isbn, const Book& updatedBook) {
//     for (auto& book : bookData) {
//         if (book.isbn == isbn) {
//             book = updatedBook;
//             return;
//         }
//     }
// }
//

// std::vector<Book> BookController::getBooksWithSearch(const std::string& search) {
//     std::vector<Book> foundBooks;
//     for (const auto& book : bookData) {
//         // Search in title, author, publisher, or genre
//         if (book.title.find(search) != std::string::npos ||
//             book.author.find(search) != std::string::npos ||
//             book.publisher.find(search) != std::string::npos) {
//             foundBooks.push_back(book);
//             } else {
//                 for (const auto& genre : book.genre) {
//                     if (genre.find(search) != std::string::npos) {
//                         foundBooks.push_back(book);
//                         break; // Break inner loop if keyword is found in genre
//                     }
//                 }
//             }
//     }
//     return foundBooks;
// }
