//
// Created by phucle on 20/04/2024.
//
#include "vector"
#include "../../include/models/ticket-model.h"

using namespace std;

vector<Ticket> getTicketsMockData() {
    vector<Ticket> mockData;
//    mockData.reserve(3);
//
//    mockData.emplace_back("1001", "2024-04-20", "2024-05-20", "", {{"9780451524935", true}, {"9780061120084", true}});
//    mockData.emplace_back("1002", "2024-04-21", "2024-05-21", "", {{"9780141187761", true}, {"9780141439556", true}});
//    mockData.emplace_back("1003", "2024-04-22", "2024-05-22", "", {{"9781400079983", true}, {"9780060935467", true}});

    return mockData;
}
vector<Ticket> ticketsData = getTicketsMockData();
