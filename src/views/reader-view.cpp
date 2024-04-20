//
// Created by phucle on 18/04/2024.
//

#include <iostream>
#include "iomanip"
#include "../../include/views/reader-view.h"
#include "../../include/controllers/utils-controller.h"

using namespace std;

void ReaderView::displayReaderMenu() {
    UtilsController::clearScreen();

    cout << "Manage Readers Menu:" << endl;
    cout << "1. View list of readers" << endl;
    cout << "2. Add reader" << endl;
    cout << "3. Edit reader information" << endl;
    cout << "4. Delete reader" << endl;
    cout << "5. Search by identification number" << endl;
    cout << "6. Search by name" << endl;
    cout << "7. General search" << endl;
    cout << "0. Return to main menu" << endl;
}

void ReaderView::viewReadersTable(const vector<Reader> &readers) {
    // Print table header
    cout << left << setw(15) << "ID";
    cout << left << setw(30) << "Full Name";
    cout << left << setw(20) << "Identity Number";
    cout << left << setw(15) << "Date of Birth";
    cout << left << setw(10) << "Gender";
    cout << left << setw(30) << "Email";
    cout << left << setw(40) << "Address";
    cout << left << setw(15) << "Issue Date";
    cout << left << setw(15) << "Expiry Date" << endl;

    // Print each reader as a row in the table
    for (const auto &reader: readers) {
        cout << left << setw(15) << reader.id;
        cout << left << setw(30) << reader.fullName;
        cout << left << setw(20) << reader.identityNumber;
        cout << left << setw(15) << reader.dateOfBirth;
        cout << left << setw(10) << reader.gender;
        cout << left << setw(30) << reader.email;
        cout << left << setw(40) << reader.address;
        cout << left << setw(15) << reader.issueDate;
        cout << left << setw(15) << reader.expiryDate << endl;
    }
}
