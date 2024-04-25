//
// Created by phucle on 4/18/2024.
//
#include "../../include/models/book-model.h"
#include "vector"

using namespace std;

vector<Book> getBooksMockData() {
    vector<Book> mockData;
    mockData.reserve(8);

    mockData.emplace_back("9780451524935", "1984", "George Orwell", "Signet Classic", 1949,
                          vector<string>{"Dystopian", "Political fiction"}, 239250, 100);
    mockData.emplace_back("9780061120084", "To Kill a Mockingbird", "Harper Lee", "Harper Perennial Modern Classics",
                          1960, vector<string>{"Novel", "Southern Gothic"}, 215850, 75);
    mockData.emplace_back("9780141187761", "The Catcher in the Rye", "J.D. Salinger", "Penguin Books", 1951,
                          vector<string>{"Coming-of-age fiction"}, 252000, 60);
    mockData.emplace_back("9780141439556", "Pride and Prejudice", "Jane Austen", "Penguin Classics", 1813,
                          vector<string>{"Romance", "Comedy of manners"}, 173125, 85);
    mockData.emplace_back("9780141182551", "The Great Gatsby", "F. Scott Fitzgerald", "Penguin Books", 1925,
                          vector<string>{"Tragedy", "Modernist novel"}, 285875, 70);
    mockData.emplace_back("9781400079983", "The Lord of the Rings", "J.R.R. Tolkien", "Mariner Books", 1954,
                          vector<string>{"Fantasy"}, 503550, 55);
    mockData.emplace_back("9780060935467", "The Road", "Cormac McCarthy", "Vintage Books", 2006,
                          vector<string>{"Post-apocalyptic fiction"}, 311325, 90);
    mockData.emplace_back("9780345339683", "The Hobbit", "J.R.R. Tolkien", "Del Rey Books", 1937,
                          vector<string>{"Fantasy"}, 362500, 80);
    return mockData;
}

vector<Book> booksData = getBooksMockData(); // Initialize bookData with mock data
