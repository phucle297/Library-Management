//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_READER_VIEW_H
#define LIBRARYPROJECT_READER_VIEW_H

#include "vector"
#include "../models/reader-model.h"

using namespace std;

class ReaderView {
public:
    static void displayReaderMenu();

    static void viewReadersTable(const vector<Reader> &reader);
};

#endif //LIBRARYPROJECT_READER_VIEW_H
