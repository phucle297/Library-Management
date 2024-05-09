//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_TICKET_CONTROLLER_H
#define LIBRARYPROJECT_TICKET_CONTROLLER_H

#include "vector"
#include "../models/ticket-model.h"

struct TicketController {
    static void handleUserChoice(int choice);

    static void viewMenuAndExecute();

    static vector<Ticket> getAllTickets();

    static vector<Ticket> getTicketById(string &ticketId);

    static vector<Ticket> searchTicket(string &searchValue);

    static Ticket updateTicketById(string &ticketId, Ticket &updatedTicket);

    static void deleteTicket(string &ticketId);

    static void createBorrowTicket(Ticket &ticketToCreate);

    static Ticket returnBooks(string &ticketId, string &returnDateActual, vector<string> &lostBooks);
};

#endif //LIBRARYPROJECT_TICKET_CONTROLLER_H
