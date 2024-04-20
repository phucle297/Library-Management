//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_BOOK_MODEL_H
#define LIBRARYPROJECT_BOOK_MODEL_H

#include <string>
#include <vector>

using namespace std;

class Book {
public:
    string isbn;
    string title;
    string author;
    string publisher;
    int publicationYear;
    vector<string> genre;
    double price;
    int quantity;

    // Constructor
    Book(const string &isbn, const string &title, const string &author,
         const string &publisher, int publicationYear,
         const vector<string> &genre, double price, int quantity)
            : isbn(isbn), title(title), author(author), publisher(publisher),
              publicationYear(publicationYear), genre(genre), price(price), quantity(quantity) {
    }
};

extern vector<Book> booksData; // Declaration of bookData
vector<Book> getMockData(); // Declaration of getMockData function

#endif // LIBRARYPROJECT_BOOK_MODEL_H
