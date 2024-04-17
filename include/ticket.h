#ifndef TICKET_H
#define TICKET_H

#include <string>
#include <vector>
#include <utility> // Để sử dụng std::pair

class Ticket {
private:
    std::vector<std::string> readerId;
    std::vector<std::string> borrowDate;
    std::vector<std::string> returnDateExpected;
    std::vector<std::string> returnDateActual;
    std::vector<std::vector<std::pair<std::string, bool>>> bookList; // Sử dụng pair để lưu trữ thông tin sách và trạng thái bị mất

public:
    void addTicket(std::string readerId, std::string borrowDate, std::string returnDateExpected, std::string returnDateActual, std::vector<std::pair<std::string, bool>> bookList);
    // Khai báo các hàm khác liên quan đến quản lí phiếu mượn/trả sách
};

#endif // TICKET_H
