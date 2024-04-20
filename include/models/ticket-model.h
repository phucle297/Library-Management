//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_TICKET_MODEL_H
#define LIBRARYPROJECT_TICKET_MODEL_H

#include <string>
#include <vector>
#include <utility> // for using pair

using namespace std;

class Ticket {
public:
    string readerId;
    string borrowDate;
    string returnDateExpected;
    string returnDateActual;
    vector<pair<string, bool>> bookList;

    Ticket(
            const string &readerId,
            const string &borrowDate,
            const string &returnDateExpected,
            const string &returnDateActual,
            const vector<pair<string, bool>> &bookList
    ) :
            readerId(readerId),
            borrowDate(borrowDate),
            returnDateExpected(returnDateExpected),
            returnDateActual(returnDateActual),
            bookList(bookList) {
    }
};

extern vector<Ticket> ticketsData;

vector<Ticket> getTicketsMockData();

#endif // LIBRARYPROJECT_TICKET_MODEL_H
