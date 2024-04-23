//
// Created by phucle on 18/04/2024.
//


#include "../../include/models/reader-model.h"
#include "vector"

using namespace std;

vector<Reader> getReadersMockData() {
    vector<Reader> mockData;
    mockData.reserve(10);

    mockData.emplace_back("1001", "John Doe", "123456789", "1990-01-01", "Male",
                          "john.doe@example.com", "123 Main Street", "2024-04-20", "2024-12-31");
    mockData.emplace_back("1002", "Jane Smith", "987654321", "1995-05-15", "Female",
                          "jane.smith@example.com", "456 Elm Street", "2024-04-20", "2024-12-31");
    mockData.emplace_back("1003", "Michael Johnson", "456789123", "1985-10-20", "Male",
                          "michael.johnson@example.com", "789 Oak Street", "2024-04-20", "2024-12-31");
    mockData.emplace_back("1004", "Emily Brown", "789123456", "1988-03-12", "Female",
                          "emily.brown@example.com", "456 Pine Street", "2024-04-20", "2024-12-31");
    mockData.emplace_back("1005", "Michael Smith", "654321789", "1975-07-05", "Male",
                          "michael.smith@example.com", "789 Maple Street", "2024-04-20", "2024-12-31");
    mockData.emplace_back("1006", "Sarah Johnson", "321987654", "1992-11-30", "Female",
                          "sarah.johnson@example.com", "123 Cedar Street", "2024-04-20", "2024-12-31");
    mockData.emplace_back("1007", "Daniel Wilson", "159753246", "1980-09-25", "Male",
                          "daniel.wilson@example.com", "789 Walnut Street", "2024-04-20", "2024-12-31");
    mockData.emplace_back("1008", "Jessica Davis", "357159246", "1998-02-18", "Female",
                          "jessica.davis@example.com", "456 Birch Street", "2024-04-20", "2024-12-31");
    mockData.emplace_back("1009", "Matthew Taylor", "369258147", "1983-06-08", "Male",
                          "matthew.taylor@example.com", "789 Cherry Street", "2024-04-20", "2024-12-31");
    mockData.emplace_back("1010", "Lauren Martinez", "258147369", "1991-12-22", "Female",
                          "lauren.martinez@example.com", "123 Apple Street", "2024-04-20", "2024-12-31");

    return mockData;
}

vector<Reader> readersData = getReadersMockData(); // Initialize readersData with mock data
