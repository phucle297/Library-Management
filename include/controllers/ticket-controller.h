//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_TICKET_CONTROLLER_H
#define LIBRARYPROJECT_TICKET_CONTROLLER_H

#include "vector"
#include "../models/ticket-model.h"

class TicketController {
public:
    static void handleUserChoice(int choice);

    static void viewMenuAndExecute();

    static vector<Ticket> getAllTickets();

    static vector<Ticket> getTicketById(string &ticketId);

    static vector<Ticket> searchTicket(string &searchValue);

    static Ticket updateTicketById(string &ticketId, Ticket &updatedTicket);

    static void deleteTicket(string &ticketId);

    static void createBorrowTicket(Ticket &ticketToCreate);

    static Ticket returnBooks(string &ticketId, Ticket &ticketReturn);
};

#endif //LIBRARYPROJECT_TICKET_CONTROLLER_H
