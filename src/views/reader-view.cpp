//
// Created by phucle on 18/04/2024.
//

#include "../../include/views/reader-view.h"
#include "../../include/controllers/utils-controller.h"
#include <iostream>

void ReaderView::displayReaderMenu() {
    UtilsController::clearScreen();

    std::cout << "Manage Readers Menu:" << std::endl;
    std::cout << "1. View list of readers" << std::endl;
    std::cout << "2. Add reader" << std::endl;
    std::cout << "3. Edit reader information" << std::endl;
    std::cout << "4. Delete reader" << std::endl;
    std::cout << "5. Search by citizen identification id" << std::endl;
    std::cout << "6. Search by name" << std::endl;
    std::cout << "7. General search" << std::endl;
    std::cout << "0. Return to main menu" << std::endl;
}
