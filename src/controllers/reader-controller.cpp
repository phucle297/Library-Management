//
// Created by phucle on 18/04/2024.
//

#include <algorithm>
#include <iostream>
#include "../../include/views/reader-view.h"
#include "../../include/controllers/reader-controller.h"
#include "../../include/controllers/utils-controller.h"
#include "../../include/controllers/menu-controller.h"

using namespace std;

void ReaderController::handleUserChoice(int choice) {
    switch (choice) {
        case 1: {
            vector<Reader> readers = getAllReaders();
            cout << "All Readers" << endl;
            ReaderView::viewReadersTable(readers);
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 2: {
            string id, fullName, identityNumber, dateOfBirth, gender, email, address, issueDate, expiryDate;
            cout << "Creating new reader..." << endl;

            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter full name: ";
            cin.ignore(); // Ignore the newline character left in the input buffer
            getline(cin, fullName); // using getline for non white-space
            cout << "Enter identity card: ";
            getline(cin, identityNumber);
            cout << "Enter date of birth (YYYY-MM-DD): ";
            getline(cin, dateOfBirth);
            cout << "Enter gender: ";
            getline(cin, gender);
            // transform gender to Pascal case
            if (!gender.empty()) {
                gender[0] = toupper(gender[0]); // Capitalize the first letter
                for (size_t i = 1; i < gender.size(); ++i) {
                    gender[i] = tolower(gender[i]); // Convert remaining letters to lowercase
                }
            }
            cout << "Enter email: ";
            getline(cin, email);
            cout << "Enter address: ";
            getline(cin, address);
            cout << "Enter issue date (YYYY-MM-DD): ";
            getline(cin, issueDate);
            cout << "Enter expiry date (YYYY-MM-DD): ";
            getline(cin, expiryDate);

            // Create a new Reader object with the provided information
            Reader newReader{id, fullName, identityNumber, dateOfBirth, gender, email, address, issueDate, expiryDate};

            // Add the new reader to your data store (e.g., readersData)
            postReader(newReader);

            // Optionally, display a message to confirm that the reader has been successfully added
            cout << "Reader added successfully!" << endl;

            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 3: {
            string idToUpdate, updatedFullName, updatedIdentityCard, updatedDateOfBirth, updatedGender, updatedEmail, updatedAddress, updatedIssueDate, updatedExpiryDate;
            bool found = false;

            cout << "Enter the ID of the reader you want to update: ";
            cin >> idToUpdate;

            // Search for the reader with the specified ID
            for (auto &reader: readersData) {
                if (reader.id == idToUpdate) {
                    found = true;

                    cout << "Enter updated full name: ";
                    cin.ignore(); // Ignore the newline character left in the input buffer
                    getline(cin, updatedFullName); // using getline for non white-space
                    if (updatedFullName.empty()) {
                        updatedFullName = reader.fullName;
                    }

                    cout << "Enter updated identity card: ";
                    getline(cin, updatedIdentityCard);
                    if (updatedIdentityCard.empty()) {
                        updatedIdentityCard = reader.identityNumber;
                    }

                    cout << "Enter updated date of birth (YYYY-MM-DD): ";
                    getline(cin, updatedDateOfBirth);
                    if (updatedDateOfBirth.empty()) {
                        updatedDateOfBirth = reader.dateOfBirth;
                    }

                    cout << "Enter updated gender: ";
                    getline(cin, updatedGender);
                    if (!updatedGender.empty()) {
                        updatedGender[0] = toupper(updatedGender[0]); // Capitalize the first letter
                        for (size_t i = 1; i < updatedGender.size(); ++i) {
                            updatedGender[i] = tolower(updatedGender[i]); // Convert remaining letters to lowercase
                        }
                    } else {
                        updatedGender = reader.gender;
                    }

                    cout << "Enter updated email: ";
                    getline(cin, updatedEmail);
                    if (updatedEmail.empty()) {
                        updatedEmail = reader.email;
                    }

                    cout << "Enter updated address: ";
                    getline(cin, updatedAddress);
                    if (updatedAddress.empty()) {
                        updatedAddress = reader.address;
                    }

                    cout << "Enter updated issue date (YYYY-MM-DD): ";
                    getline(cin, updatedIssueDate);
                    if (updatedIssueDate.empty()) {
                        updatedIssueDate = reader.issueDate;
                    }

                    cout << "Enter updated expiry date (YYYY-MM-DD): ";
                    getline(cin, updatedExpiryDate);
                    if (updatedExpiryDate.empty()) {
                        updatedExpiryDate = reader.expiryDate;
                    }

                    // Create a new Reader object with the updated information
                    Reader updatedReader{idToUpdate, updatedFullName, updatedIdentityCard, updatedDateOfBirth,
                                         updatedGender, updatedEmail, updatedAddress, updatedIssueDate,
                                         updatedExpiryDate};

                    // Update the reader in your data store (e.g., readersData)
                    updateReader(idToUpdate, updatedReader);

                    // Display a message to confirm that the reader has been successfully updated
                    cout << "Reader " << idToUpdate << " updated!" << endl;

                    break;
                }
            }

            if (!found) {
                cout << "Reader with ID " << idToUpdate << " not found. Please try again." << endl;
            }

            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 4: {
            string idToDelete;
            cout << "Enter the ID of the reader you want to delete: ";
            cin >> idToDelete;
            deleteReader(idToDelete);
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 5: {
            string identityNumberToSearch;
            cout << "Enter the identity number of the reader you want to search for: ";
            cin >> identityNumberToSearch;
            vector<Reader> foundReaders = getReaderByIdentityNumber(identityNumberToSearch);

            if (!foundReaders.empty()) {
                cout << "Reader found!" << endl;
                ReaderView::viewReadersTable(foundReaders);
            } else {
                cout << "Reader with identity number " << identityNumberToSearch << " not found." << endl;
            }
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 6: {
            string nameToSearch;
            cout << "Enter the name of the reader you want to search for: ";
            cin.ignore();
            getline(cin, nameToSearch);
            transform(nameToSearch.begin(), nameToSearch.end(), nameToSearch.begin(), ::tolower);
            vector<Reader> foundReaders = getReaderByName(nameToSearch);

            if (!foundReaders.empty()) {
                cout << "User found!" << endl;
                ReaderView::viewReadersTable(foundReaders);
            } else {
                cout << "Reader with name \"" << nameToSearch << "\" not found." << endl;
            }
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        };
        case 7 : {
            string searchValue;
            cout << "Enter search value: ";
            cin.ignore();
            getline(cin, searchValue);
            transform(searchValue.begin(), searchValue.end(), searchValue.begin(), ::tolower);

            vector<Reader> foundReaders = getReadersWithSearch(searchValue);

            if (!foundReaders.empty()) {
                cout << "User found!" << endl;
                ReaderView::viewReadersTable(foundReaders);
            } else {
                cout << "Not found." << endl;
            }
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 0: {
            UtilsController::clearScreen();
            MenuController::viewMenuAndExecute();
            break;
        }
        default: {
            cout << "Invalid choice! Please try again." << endl;
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
    }
}

void ReaderController::viewMenuAndExecute() {
    ReaderView::displayReaderMenu();

    int choice = UtilsController::getUserChoice();

    handleUserChoice(choice);
}

vector<Reader> ReaderController::getAllReaders() {
    return readersData;
}

vector<Reader> ReaderController::getReaderByIdentityNumber(const string &identityNumberToSearch) {
    vector<Reader> foundReader;
    for (const auto &reader: readersData) {
        if (reader.identityNumber.find(identityNumberToSearch) != string::npos) {
            // Display the details of the found reader using the existing function
            foundReader.push_back(reader);
        }
    }
    return foundReader;
}

vector<Reader> ReaderController::getReaderByName(const string &name) {
    vector<Reader> foundReaders = {};
    for (const auto &reader: readersData) {
        string fullNameLower = reader.fullName;
        transform(fullNameLower.begin(), fullNameLower.end(), fullNameLower.begin(), ::tolower);
        if (fullNameLower.find(name) != string::npos) {
            foundReaders.push_back(reader);
        }
    }
    return foundReaders;
}

void ReaderController::postReader(const Reader &newReader) {
    readersData.push_back(newReader);
}

void ReaderController::updateReader(const string &id, const Reader &updatedReader) {
    for (auto &reader: readersData) {
        if (reader.id == id) {
            reader = updatedReader;
            break;
        }
    }
}

void ReaderController::deleteReader(const string &idToDelete) {
    bool found = false;

    // Search for the reader with the specified ID
    for (auto it = readersData.begin(); it != readersData.end(); ++it) {
        if (it->id == idToDelete) {
            found = true;
            // Erase the reader from the data store
            readersData.erase(it);
            cout << "Reader " << idToDelete << " deleted!" << endl;
            break;
        }
    }

    if (!found) {
        cout << "Reader with ID " << idToDelete << " not found. Please try again." << endl;
    }

}

vector<Reader> ReaderController::getReadersWithSearch(const string &search) {
    vector<Reader> foundReaders;
    for (const auto &reader: readersData) {

        string idLowerCase = reader.id;
        transform(idLowerCase.begin(), idLowerCase.end(), idLowerCase.begin(), ::tolower);

        string fullNameLowerCase = reader.fullName;
        transform(fullNameLowerCase.begin(), fullNameLowerCase.end(), fullNameLowerCase.begin(), ::tolower);

        string emailLowerCase = reader.email;
        transform(emailLowerCase.begin(), emailLowerCase.end(), emailLowerCase.begin(), ::tolower);

        string addressLowerCase = reader.address;
        transform(addressLowerCase.begin(), addressLowerCase.end(), addressLowerCase.begin(), ::tolower);

        if (idLowerCase.find(search) != string::npos ||
            fullNameLowerCase.find(search) != string::npos ||
            emailLowerCase.find(search) != string::npos ||
            addressLowerCase.find(search) != string::npos ||
            reader.identityNumber.find(search) != string::npos) {
            foundReaders.push_back(reader);
        }
    }
    return foundReaders;
}
