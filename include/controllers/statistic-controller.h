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

struct StatisticController {
    static void handleUserChoice(int choice);

    static void viewMenuAndExecute();

    static void listAllBooks();

    static void listBooksByGenre();

    static void listAllReaders();

    static void listReadersByGender();

    static void listBooksWereBorrowed();

    static vector<Reader> listOverdueReaders();

    static vector<Ticket> listOverdueTickets();

    static double calcFeeAmount(const Ticket &ticket);

    static double calcOverdueFee(const Ticket &ticket);

    static double calcLostBookPenalty(const string &isbn);
};

#endif //LIBRARYPROJECT_STATISTIC_CONTROLLER_H
