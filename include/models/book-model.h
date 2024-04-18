//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_BOOK_MODEL_H
#define LIBRARYPROJECT_BOOK_MODEL_H

#include <string>
#include <vector>

class Book {
private:
    std::string isbn;
    std::string title;
    std::string author;
    std::string publisher;
    std::int32_t publicationYear;
    std::vector<std::string> genre;
    std::float_t price;
    std::int32_t quantity;
};

#endif // LIBRARYPROJECT_BOOK_MODEL_H
