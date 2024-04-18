//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_TICKET_MODEL_H
#define LIBRARYPROJECT_TICKET_MODEL_H

#include <string>
#include <vector>
#include <utility> // Để sử dụng std::pair

class Ticket {
public:
    std::string readerId;
    std::string borrowDate;
    std::string returnDateExpected;
    std::string returnDateActual;
    std::vector<std::pair<std::string, bool> > bookList;
};

#endif // LIBRARYPROJECT_TICKET_MODEL_H
