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
            bool flag = false;
            while (!flag) {
                cout << "Enter ID: ";
                cin >> id;
                bool isIdExists = false;
                for (Reader &reader: readersData) {
                    if (reader.id == id) {
                        isIdExists = true;
                        cout << "Reader id exists, please enter again." << endl;
                        break;
                    }
                }
                if (!isIdExists) flag = true;
            };

            cout << "Enter full name: ";
            cin.ignore();
            getline(cin, fullName);
            cout << "Enter identity card: ";
            getline(cin, identityNumber);
            cout << "Enter date of birth (YYYY-MM-DD): ";
            getline(cin, dateOfBirth);
            cout << "Enter gender: ";
            getline(cin, gender);
            if (!gender.empty()) {
                gender[0] = toupper(gender[0]);
                for (size_t i = 1; i < gender.size(); ++i) {
                    gender[i] = tolower(gender[i]);
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

            Reader newReader{id, fullName, identityNumber, dateOfBirth, gender, email, address, issueDate, expiryDate};

            postReader(newReader);

            cout << "Reader added successfully!" << endl;

            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 3: {
            string idToUpdate, updatedFullName, updatedIdentityCard, updatedDateOfBirth, updatedGender, updatedEmail,
                    updatedAddress, updatedIssueDate, updatedExpiryDate;
            bool found = false;

            cout << "Enter the ID of the reader you want to update: ";
            cin >> idToUpdate;

            for (auto &reader: readersData) {
                if (reader.id == idToUpdate) {
                    found = true;

                    cout << "Enter updated full name: ";
                    cin.ignore();
                    getline(cin, updatedFullName);
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
                        updatedGender[0] = toupper(updatedGender[0]);
                        for (size_t i = 1; i < updatedGender.size(); ++i) {
                            updatedGender[i] = tolower(updatedGender[i]);
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

                    Reader updatedReader{
                            idToUpdate, updatedFullName, updatedIdentityCard, updatedDateOfBirth,
                            updatedGender, updatedEmail, updatedAddress, updatedIssueDate,
                            updatedExpiryDate
                    };

                    updateReader(idToUpdate, updatedReader);

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
        case 7: {
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
    UtilsController::writeDataToFile(READERS_DATA_PATH, writeReadersToFile);
}

void ReaderController::updateReader(const string &id, const Reader &updatedReader) {
    for (auto &reader: readersData) {
        if (reader.id == id) {
            reader = updatedReader;
            break;
        }
    }
    UtilsController::writeDataToFile(READERS_DATA_PATH, writeReadersToFile);
}

void ReaderController::deleteReader(const string &idToDelete) {
    bool found = false;

    for (auto it = readersData.begin(); it != readersData.end(); ++it) {
        if (it->id == idToDelete) {
            found = true;
            readersData.erase(it);
            cout << "Reader " << idToDelete << " deleted!" << endl;
            break;
        }
    }

    if (!found) {
        cout << "Reader with ID " << idToDelete << " not found. Please try again." << endl;
    }
    UtilsController::writeDataToFile(READERS_DATA_PATH, writeReadersToFile);
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

void ReaderController::parseReaders(FILE *fp) {
    vector<Reader> readersDataFromFile;
    char id[100], fullName[250], identityNumber[100], dateOfBirth[30], gender[10], email[100], address[250], issueDate[30], expiryDate[30];

    while (fscanf(fp, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n", id, fullName, identityNumber,
                  dateOfBirth, gender, email, address, issueDate, expiryDate) != EOF) {
        readersDataFromFile.emplace_back(id, fullName, identityNumber, dateOfBirth, gender, email, address, issueDate,
                                         expiryDate);
    }

    readersData = readersDataFromFile;
}

void ReaderController::writeReadersToFile(FILE *fp) {
    for (const auto &reader: readersData) {
        fprintf(fp, "%s,%s,%s,%s,%s,%s,%s,%s,%s\n", reader.id.c_str(), reader.fullName.c_str(),
                reader.identityNumber.c_str(), reader.dateOfBirth.c_str(), reader.gender.c_str(), reader.email.c_str(),
                reader.address.c_str(), reader.issueDate.c_str(), reader.expiryDate.c_str());
    }
}
