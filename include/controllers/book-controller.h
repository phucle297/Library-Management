//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_BOOK_CONTROLLER_H
#define LIBRARYPROJECT_BOOK_CONTROLLER_H
#include "../models/book-model.h"

class BookController {
public:
    static void handleUserChoice(int choice);

    static void viewMenuAndExecute();

    static std::vector<Book> getAllBooks();

    static std::vector<Book> getBookByISBN(const std::string &isbn);

    static std::vector<Book> getBookByName(const std::string &name);

    static void postBook(const Book &newBook);

    static void updateBook(const std::string &isbn, const Book &updatedBook);

    static void deleteBook(const std::string &isbn);

    static std::vector<Book> getBooksWithSearch(const std::string &search);
};

#endif //LIBRARYPROJECT_BOOK_CONTROLLER_H
