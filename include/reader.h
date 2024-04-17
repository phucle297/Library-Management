#ifndef READER_H
#define READER_H

#include <string>
#include <vector>

class Reader {
private:
    std::vector<std::string> id;
    std::vector<std::string> fullName;
    std::vector<std::string> identityCard;
    std::vector<std::string> dateOfBirth;
    std::vector<std::string> gender;
    std::vector<std::string> email;
    std::vector<std::string> address;
    std::vector<std::string> issueDate;
    std::vector<std::string> expiryDate;

public:
    void addReader(std::string id, std::string fullName, std::string identityCard, std::string dateOfBirth, std::string gender, std::string email, std::string address, std::string issueDate, std::string expiryDate);
    // Khai báo các hàm khác liên quan đến quản lí độc giả
};

#endif // READER_H
