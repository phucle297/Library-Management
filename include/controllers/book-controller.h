//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_BOOK_CONTROLLER_H
#define LIBRARYPROJECT_BOOK_CONTROLLER_H

#include "../models/book-model.h"

using namespace std;

struct BookController {
    static void handleUserChoice(int choice);

    static void viewMenuAndExecute();

    static vector<Book> getAllBooks();

    static vector<Book> getBookByISBN(const string &isbn);

    static vector<Book> getBookByName(const string &name);

    static void postBook(const Book &newBook);

    static void updateBook(const string &isbn, const Book &updatedBook);

    static void deleteBook(const string &isbn);

    static vector<Book> getBooksWithSearch(const string &search);
};

#endif //LIBRARYPROJECT_BOOK_CONTROLLER_H
