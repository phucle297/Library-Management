//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_TICKET_CONTROLLER_H
#define LIBRARYPROJECT_TICKET_CONTROLLER_H

class TicketController {
public:
    static void handleUserChoice(int choice);

    static void viewMenuAndExecute();

    static void createBorrowTicket();

    static void returnBooks();
};

#endif //LIBRARYPROJECT_TICKET_CONTROLLER_H
