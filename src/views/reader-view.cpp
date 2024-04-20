//
// Created by phucle on 18/04/2024.
//

#include "../../include/views/reader-view.h"
#include "../../include/controllers/utils-controller.h"
#include <iostream>

using namespace std;

void ReaderView::displayReaderMenu() {
    UtilsController::clearScreen();

    cout << "Manage Readers Menu:" << endl;
    cout << "1. View list of readers" << endl;
    cout << "2. Add reader" << endl;
    cout << "3. Edit reader information" << endl;
    cout << "4. Delete reader" << endl;
    cout << "5. Search by citizen identification id" << endl;
    cout << "6. Search by name" << endl;
    cout << "7. General search" << endl;
    cout << "0. Return to main menu" << endl;
}
