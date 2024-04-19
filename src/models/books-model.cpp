//
// Created by dpper on 4/18/2024.
//
#include "../../include/models/book-model.h"
#include "vector"

std::vector<Book> getMockData() {
    std::vector<Book> mockData;
    mockData.reserve(10); // Reserve space for 10 elements to avoid reallocation

    // Add each Book object individually
    mockData.emplace_back("9780451524935", "1984", "George Orwell", "Signet Classic", 1949,
                          std::vector<std::string>{"Dystopian", "Political fiction"}, 9.99, 100);

    mockData.emplace_back("9780061120084", "To Kill a Mockingbird", "Harper Lee", "Harper Perennial Modern Classics",
                          1960, std::vector<std::string>{"Novel", "Southern Gothic"}, 8.99, 75);
    mockData.emplace_back("9780141187761", "The Catcher in the Rye", "J.D. Salinger", "Penguin Books", 1951,
                          std::vector<std::string>{"Coming-of-age fiction"}, 10.50, 60);
    mockData.emplace_back("9780141439556", "Pride and Prejudice", "Jane Austen", "Penguin Classics", 1813,
                          std::vector<std::string>{"Romance", "Comedy of manners"}, 7.25, 85);
    mockData.emplace_back("9780141182551", "The Great Gatsby", "F. Scott Fitzgerald", "Penguin Books", 1925,
                          std::vector<std::string>{"Tragedy", "Modernist novel"}, 11.75, 70);
    mockData.emplace_back("9781400079983", "The Lord of the Rings", "J.R.R. Tolkien", "Mariner Books", 1954,
                          std::vector<std::string>{"Fantasy"}, 20.99, 55);
    mockData.emplace_back("9780060935467", "The Road", "Cormac McCarthy", "Vintage Books", 2006,
                          std::vector<std::string>{"Post-apocalyptic fiction"}, 12.99, 90);
    mockData.emplace_back("9780345339683", "The Hobbit", "J.R.R. Tolkien", "Del Rey Books", 1937,
                          std::vector<std::string>{"Fantasy"}, 14.50,
                          80);
    mockData.emplace_back("9780446310789", "To Kill a Mockingbird", "Harper Lee", "Grand Central Publishing", 1960,
                          std::vector<std::string>{"Novel", "Southern Gothic"}, 9.25, 65);

    return mockData;
}

std::vector<Book> booksData = getMockData(); // Initialize bookData with mock data
