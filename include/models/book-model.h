//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_BOOK_MODEL_H
#define LIBRARYPROJECT_BOOK_MODEL_H

#include <string>
#include <vector>

class Book {
public:
    std::string isbn;
    std::string title;
    std::string author;
    std::string publisher;
    int publicationYear;
    std::vector<std::string> genre;
    double price;
    int quantity;

    // Constructor
    Book(const std::string &isbn, const std::string &title, const std::string &author,
         const std::string &publisher, int publicationYear,
         const std::vector<std::string> &genre, double price, int quantity)
        : isbn(isbn), title(title), author(author), publisher(publisher),
          publicationYear(publicationYear), genre(genre), price(price), quantity(quantity) {
    }
};

extern std::vector<Book> booksData; // Declaration of bookData
std::vector<Book> getMockData(); // Declaration of getMockData function

#endif // LIBRARYPROJECT_BOOK_MODEL_H
