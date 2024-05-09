//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_READER_CONTROLLER_H
#define LIBRARYPROJECT_READER_CONTROLLER_H

#include "../models/reader-model.h"

struct ReaderController {
    static void handleUserChoice(int choice);

    static void viewMenuAndExecute();

    static vector<Reader> getAllReaders();

    static vector<Reader> getReaderByIdentityNumber(const string &identityId);

    static vector<Reader> getReaderByName(const string &name);

    static void postReader(const Reader &newReader);

    static void updateReader(const string &id, const Reader &updatedReader);

    static void deleteReader(const string &id);

    static vector<Reader> getReadersWithSearch(const string &search);
};

#endif //LIBRARYPROJECT_READER_CONTROLLER_H
