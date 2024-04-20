//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_READER_MODEL_H
#define LIBRARYPROJECT_READER_MODEL_H

#include <string>

using namespace std;

class Reader {
public:
    string id;
    string fullName;
    string identityCard;
    string dateOfBirth;
    string gender;
    string email;
    string address;
    string issueDate;
    string expiryDate;
};

#endif // LIBRARYPROJECT_READER_MODEL_H
