//
// Created by phucle on 4/18/2024.
//
#include "../../include/models/book-model.h"
#include "../../include/controllers/utils-controller.h"
#include "../../include/controllers/book-controller.h"

using namespace std;

void getBooksMockData() {
    UtilsController::getDataFromFile(BOOKS_DATA_PATH, BookController::parseBooks);
}

vector<Book> booksData = {}; // Initialize booksData with empty vector
