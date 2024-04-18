//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_BOOK_VIEW_H
#define LIBRARYPROJECT_BOOK_VIEW_H
#include "vector"
#include "../models/book-model.h"

class BookView {
public:
    static void displayBookMenu();

    static void viewBooksTable(const std::vector<Book> &books);
};

#endif //LIBRARYPROJECT_BOOK_VIEW_H
