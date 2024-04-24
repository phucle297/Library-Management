//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_STATISTIC_CONTROLLER_H
#define LIBRARYPROJECT_STATISTIC_CONTROLLER_H

#include "vector"
#include "../models/book-model.h"
#include "../models/reader-model.h"
#include "../models/ticket-model.h"

using namespace std;

class StatisticController {
public:
    static void handleUserChoice(int choice);

    static void viewMenuAndExecute();

    static void listAllBooks();

    static void listBooksByGenre();

    static void listAllReaders();

    static void listReadersByGender();

    static void listBooksWereBorrowed();

    static vector<Reader> listOverdueReaders();

    static vector<Ticket> listOverdueTickets();

    static int calcFeeAmount(const Ticket &ticket);

    static int calcOverdueFee(const Ticket &ticket);

    static int calcLostBookPenalty(const string &isbn);
};

#endif //LIBRARYPROJECT_STATISTIC_CONTROLLER_H
