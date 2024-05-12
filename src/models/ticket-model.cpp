//
// Created by phucle on 20/04/2024.
//
#include "vector"
#include "../../include/models/ticket-model.h"
#include "../../include/controllers/utils-controller.h"
#include "../../include/controllers/ticket-controller.h"

using namespace std;

void getTicketsMockData() {
    UtilsController::getDataFromFile(TICKETS_DATA_PATH, TicketController::parseTickets);
}

vector<Ticket> ticketsData = {};
