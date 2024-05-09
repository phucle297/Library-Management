//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_TICKET_VIEW_H
#define LIBRARYPROJECT_TICKET_VIEW_H

#include "vector"
#include "../models/ticket-model.h"

struct TicketView {
    static void displayTicketMenu();

    static void viewTicketsTable(vector<Ticket> &tickets);

    static void viewTicketsTable(Ticket &ticket);
};

#endif //LIBRARYPROJECT_TICKET_VIEW_H
