//
// Created by phucle on 4/18/2024.
//
#include "../../include/models/book-model.h"
#include "../../include/controllers/utils-controller.h"
#include "../../include/controllers/book-controller.h"

using namespace std;

void getBooksMockData() {
    string path = "../books.txt";
    UtilsController::getDataFromFile(path, BookController::parseBooks);
}

vector<Book> booksData;
