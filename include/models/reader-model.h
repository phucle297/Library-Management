//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_READER_MODEL_H
#define LIBRARYPROJECT_READER_MODEL_H

#include <string>
#include "vector"

using namespace std;

struct Reader {
    string id;
    string fullName;
    string identityNumber;
    string dateOfBirth;
    string gender;
    string email;
    string address;
    string issueDate;
    string expiryDate;

    // Constructor
    Reader(
            const string &id,
            const string &fullName,
            const string &identityNumber,
            const string &dateOfBirth,
            const string &gender,
            const string &email,
            const string &address,
            const string &issueDate,
            const string &expiryDate
    ) : id(id),
        fullName(fullName),
        identityNumber(identityNumber),
        dateOfBirth(dateOfBirth),
        gender(gender),
        email(email),
        address(address),
        issueDate(issueDate),
        expiryDate(expiryDate) {
    }
};

extern vector<Reader> readersData;
const string READERS_DATA_PATH = "../readers.txt";

void getReadersMockData();

#endif // LIBRARYPROJECT_READER_MODEL_H
