//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_TICKET_MODEL_H
#define LIBRARYPROJECT_TICKET_MODEL_H

#include <string>
#include <vector>

using namespace std;

class BookStatus {
public:
    string isbn;
    bool lost;

    BookStatus(const string &isbn, const bool lost) : isbn(isbn), lost(lost) {
    }
};

class Ticket {
public:
    string id;
    string readerId;
    string borrowDate;
    string returnDateExpected;
    string returnDateActual;
    vector<BookStatus> listBookStatus;

    Ticket(
            const string &id,
            const string &readerId,
            const string &borrowDate,
            const string &returnDateExpected,
            const string &returnDateActual,
            const vector<BookStatus> &listBookStatus
    ) : id(id),
        readerId(readerId),
        borrowDate(borrowDate),
        returnDateExpected(returnDateExpected),
        returnDateActual(returnDateActual),
        listBookStatus(listBookStatus) {
    }
};

extern vector<Ticket> ticketsData;

vector<Ticket> getTicketsMockData();

#endif // LIBRARYPROJECT_TICKET_MODEL_H
