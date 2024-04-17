#ifndef BOOKS_H
#define BOOKS_H

#include <string>
#include <vector>

class Books {
private:
    std::vector<std::string> isbn;
    std::vector<std::string> title;
    std::vector<std::string> author;
    std::vector<std::string> publisher;
    std::vector<int> publicationYear;
    std::vector<std::string> genre;
    std::vector<double> price;
    std::vector<int> quantity;

public:
    void addBook(std::string isbn, std::string title, std::string author, std::string publisher, int publicationYear, std::string genre, double price, int quantity);
    // Khai báo các hàm khác liên quan đến quản lí sách
};

#endif // BOOKS_H
