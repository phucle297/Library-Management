//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_BOOK_MODEL_H
#define LIBRARYPROJECT_BOOK_MODEL_H

#include <string>
#include <vector>

using namespace std;

struct Book {
    string isbn;
    string title;
    string author;
    string publisher;
    int publicationYear;
    vector<string> genre;
    double price;
    int quantity;

    Book(
            const string &isbn,
            const string &title,
            const string &author,
            const string &publisher,
            const int publicationYear,
            const vector<string> &genre,
            const double price,
            const int quantity
    ) :
            isbn(isbn),
            title(title),
            author(author),
            publisher(publisher),
            publicationYear(publicationYear),
            genre(genre),
            price(price),
            quantity(quantity) {
    }
};

extern vector<Book> booksData; // Declaration of bookData
void getBooksMockData(); // Declaration of getMockData function

#endif // LIBRARYPROJECT_BOOK_MODEL_H
