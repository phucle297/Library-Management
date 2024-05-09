//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_UTILS_CONTROLLER_H
#define LIBRARYPROJECT_UTILS_CONTROLLER_H

#include "string"
#include "iostream"
#include "fstream"

using namespace std;

struct UtilsController {
    static int getUserChoice();

    static void clearScreen();

    static void stopBeforeCloseConsole();

    static void shouldContinue(void (*callback)());

    static string getCurrentDate();

    static int calcDateDifference(const string &date1_str, const string &date2_str);

    static string toLocaleString(const double &number);

    static void readMockDataFromFile(const string &filename, void (*callback)(const string &line));
};

#endif //LIBRARYPROJECT_UTILS_CONTROLLER_H
