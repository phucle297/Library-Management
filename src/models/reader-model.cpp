//
// Created by phucle on 18/04/2024.
//


#include "../../include/models/reader-model.h"
#include "../../include/controllers/reader-controller.h"
#include "../../include/controllers/utils-controller.h"
#include "vector"

using namespace std;

void getReadersMockData() {
    UtilsController::getDataFromFile(READERS_DATA_PATH, ReaderController::parseReaders);
}

vector<Reader> readersData = {};
