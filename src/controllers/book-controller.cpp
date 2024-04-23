//
// Created by phucle on 18/04/2024.
//

#include <algorithm>
#include <iostream>
#include <sstream>
#include "../../include/controllers/book-controller.h"
#include "../../include/controllers/utils-controller.h"
#include "../../include/controllers/menu-controller.h"
#include "../../include/views/book-view.h"

using namespace std;

void BookController::handleUserChoice(int choice) {
    switch (choice) {
        case 1: {
            vector<Book> books = getAllBooks();
            cout << "All Books" << endl;
            BookView::viewBooksTable(books);
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 2: {
            string isbn, title, author, publisher;
            int publicationYear, quantity;
            double price;
            vector<string> genre;
            cout << "Creating new book..." << endl;

            cout << "Enter ISBN: ";
            cin >> isbn;
            cout << "Enter title: ";
            cin.ignore();
            getline(cin, title);
            cout << "Enter author: ";
            getline(cin, author);
            cout << "Enter publisher: ";
            getline(cin, publisher);
            cout << "Enter publication year: ";
            cin >> publicationYear;
            cout << "Enter quantity: ";
            cin >> quantity;
            cout << "Enter price: ";
            cin >> price;

            string genreStr;
            cout << "Enter genres (comma-separated): ";
            cin.ignore();
            getline(cin, genreStr);

            istringstream iss(genreStr);
            string genreToken;
            while (getline(iss, genreToken, ',')) {
                genre.push_back(genreToken);
            }

            Book newBook(isbn, title, author, publisher, publicationYear, genre, price, quantity);

            postBook(newBook);

            cout << "Book added successfully!" << endl;

            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }
        case 3: {
            string updatedTitle, updatedAuthor, updatedPublisher, isbnToUpdate, updatedPublicationYear, updatedQuantity, updatedPrice;
            vector<string> updatedGenre;
            int publicationYearOld = 0, quantityOld = 0;
            double priceOld = 0.0;
            bool found = false;

            while (!found) {
                cout << "Enter the ISBN of the book you want to update: ";
                cin >> isbnToUpdate;
                cout << "Press Enter with empty string to keep existing data..." << endl;

                for (auto &book: booksData) {
                    if (book.isbn == isbnToUpdate) {
                        cout << "Enter updated title: ";
                        cin.ignore();
                        getline(cin, updatedTitle);
                        if (updatedTitle.empty()) {
                            updatedTitle = book.title;
                        }

                        cout << "Enter updated author: ";
                        getline(cin, updatedAuthor);
                        if (updatedAuthor.empty()) {
                            updatedAuthor = book.author;
                        }

                        cout << "Enter updated publisher: ";
                        getline(cin, updatedPublisher);
                        if (updatedPublisher.empty()) {
                            updatedPublisher = book.publisher;
                        }

                        cout << "Enter updated publication year: ";
                        getline(cin, updatedPublicationYear);
                        if (updatedPublicationYear.empty()) {
                            publicationYearOld = book.publicationYear;
                        }

                        cout << "Enter updated quantity: ";
                        getline(cin, updatedQuantity);
                        if (updatedQuantity.empty()) {
                            quantityOld = book.quantity;
                        }

                        cout << "Enter updated price: ";
                        getline(cin, updatedPrice);
                        if (updatedPrice.empty()) {
                            priceOld = book.price;
                        }

                        string genreStr;
                        cout << "Enter updated genres (comma-separated): ";
                        cin.ignore();
                        getline(cin, genreStr);
                        if (!genreStr.empty()) {
                            istringstream iss(genreStr);
                            string genreToken;
                            while (getline(iss, genreToken, ',')) {
                                updatedGenre.push_back(genreToken);
                            }
                        } else {
                            updatedGenre = book.genre;
                        }

                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Book with ISBN " << isbnToUpdate << " not found. Please try again." << endl;
                }
            }
            int publicationYearToUpdate = (publicationYearOld > 0) ? publicationYearOld : stoi(
                    updatedPublicationYear);

            int quantityToUpdate = (quantityOld > 0) ? quantityOld : stoi(updatedQuantity);
            double priceToUpdate = (priceOld > 0) ? priceOld : stod(updatedPrice);

            Book updatedBook(isbnToUpdate, updatedTitle, updatedAuthor, updatedPublisher, publicationYearToUpdate,
                             updatedGenre, priceToUpdate, quantityToUpdate);

            cout << "Book " << isbnToUpdate << " updated!" << endl;
            updateBook(isbnToUpdate, updatedBook);
            UtilsController::shouldContinue(viewMenuAndExecute);
        }
        case 4: {
            string isbnToDelete;
            cout << "Enter the ISBN of the book you want to delete: ";
            cin >> isbnToDelete;
            deleteBook(isbnToDelete);
            UtilsController::shouldContinue(viewMenuAndExecute);

            break;
        }
        case 5: {
            string isbn;
            cout << "Search by ISBN:";
            cin >> isbn;
            transform(isbn.begin(), isbn.end(), isbn.begin(), [](unsigned char c) { return tolower(c); });

            vector<Book> books = getBookByISBN(isbn);
            if (!books.empty()) {
                cout << "Books find by ISBN" << endl;
                BookView::viewBooksTable(books);
            } else {
                cout << "Not found!" << endl;
            }
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }

        case 6: {
            string name;
            cout << "Search by Name:";
            cin >> name;
            transform(name.begin(), name.end(), name.begin(), [](unsigned char c) { return tolower(c); });
            vector<Book> books = getBookByName(name);

            if (!books.empty()) {
                cout << "Books find by name" << endl;
                BookView::viewBooksTable(books);
            } else {
                cout << "Not found!" << endl;
            }
            UtilsController::shouldContinue(viewMenuAndExecute);
            break;
        }

        case 7: {
            string search;
            cout << "Enter value to search: ";
            cin >> search;
            transform(search.begin(), search.end(), search.begin(), [](unsigned char c) { return tolower(c); });

            vector<Book> books = getBooksWithSearch(search);
            if (!books.empty()) {
                cout << "Books find by name" << endl;
                BookView::viewBooksTable(books);
            } else {
                cout << "Not found!" << endl;
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

void BookController::viewMenuAndExecute() {
    BookView::displayBookMenu();

    int choice = UtilsController::getUserChoice();

    handleUserChoice(choice);
}

vector<Book> BookController::getAllBooks() {
    return booksData;
}

void BookController::postBook(const Book &newBook) {
    booksData.push_back(newBook);
}

void BookController::updateBook(const string &isbn, const Book &updatedBook) {
    for (auto &book: booksData) {
        if (book.isbn == isbn) {
            book = updatedBook;
            break;
        }
    }
}


vector<Book> BookController::getBookByISBN(const string &isbn) {
    vector<Book> foundBooks;
    for (const auto &book: booksData) {
        if (book.isbn.find(isbn) != string::npos) {
            foundBooks.push_back(book);
        }
    }
    return foundBooks;
}

vector<Book> BookController::getBookByName(const string &name) {
    vector<Book> foundBooks;
    for (const auto &book: booksData) {
        string titleTransformed = book.title;
        transform(titleTransformed.begin(), titleTransformed.end(), titleTransformed.begin(),
                  [](unsigned char c) { return tolower(c); });
        if (titleTransformed.find(name) != string::npos) {
            foundBooks.push_back(book);
        }
    }
    return foundBooks;
}

vector<Book> BookController::getBooksWithSearch(const string &search) {
    vector<Book> foundBooks;
    for (const auto &book: booksData) {
        string titleTransformed = book.title;
        transform(titleTransformed.begin(), titleTransformed.end(), titleTransformed.begin(),
                  [](unsigned char c) { return tolower(c); });

        string authorTransformed = book.author;
        transform(authorTransformed.begin(), authorTransformed.end(), authorTransformed.begin(),
                  [](unsigned char c) { return tolower(c); });

        string publisherTransformed = book.publisher;
        transform(authorTransformed.begin(), authorTransformed.end(), authorTransformed.begin(),
                  [](unsigned char c) { return tolower(c); });

        if (titleTransformed.find(search) != string::npos ||
            authorTransformed.find(search) != string::npos ||
            publisherTransformed.find(search) != string::npos ||
            to_string(book.publicationYear).find(search) != string::npos) {
            foundBooks.push_back(book);
        } else {
            for (const auto &genre: book.genre) {
                if (genre.find(search) != string::npos) {
                    foundBooks.push_back(book);
                    break;
                }
            }
        }
    }
    return foundBooks;
}

void BookController::deleteBook(const string &isbnToDelete) {
    bool found = false;

    for (auto it = booksData.begin(); it != booksData.end(); ++it) {
        if (it->isbn == isbnToDelete) {
            found = true;
            booksData.erase(it);
            cout << "Book " << isbnToDelete << " deleted!" << endl;
            break;
        }
    }

    if (!found) {
        cout << "Book with ISBN " << isbnToDelete << " not found. Please try again." << endl;
    }
}