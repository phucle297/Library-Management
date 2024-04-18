//
// Created by phucle on 18/04/2024.
//
#include "../../include/views/book-view.h"
#include "../../include/controllers/utils-controller.h"
#include "iostream"

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
