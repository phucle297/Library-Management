//
// Created by phucle on 20/04/2024.
//
#include "vector"
#include "../../include/models/ticket-model.h"

using namespace std;

vector<Ticket> getTicketsMockData() {
    vector<Ticket> mockData;
    mockData.reserve(3);

    BookStatus book1("9780451524935", true);
    BookStatus book2("9780061120084", true);
    BookStatus book3("9780141187761", true);
    BookStatus book4("9780141439556", true);
    BookStatus book5("9781400079983", true);
    BookStatus book6("9780060935467", true);

    mockData.emplace_back("001", "1001", "2024-04-20", "2024-05-20", "", vector<BookStatus>{book1, book2});
    mockData.emplace_back("002", "1002", "2024-04-21", "2024-05-21", "", vector<BookStatus>{book3, book4});
    mockData.emplace_back("003", "1003", "2024-03-22", "2024-04-22", "", vector<BookStatus>{book5, book6});
    mockData.emplace_back("004", "1004", "2024-02-22", "2024-03-22", "2024-04-21", vector<BookStatus>{book5, book6});

    return mockData;
}

vector<Ticket> ticketsData = getTicketsMockData();
