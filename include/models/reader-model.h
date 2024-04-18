//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_READER_MODEL_H
#define LIBRARYPROJECT_READER_MODEL_H

#include <string>

class Reader {
public:
    std::string id;
    std::string fullName;
    std::string identityCard;
    std::string dateOfBirth;
    std::string gender;
    std::string email;
    std::string address;
    std::string issueDate;
    std::string expiryDate;
};

#endif // LIBRARYPROJECT_READER_MODEL_H
