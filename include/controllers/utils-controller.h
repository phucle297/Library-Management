//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_UTILS_CONTROLLER_H
#define LIBRARYPROJECT_UTILS_CONTROLLER_H

#include "string"
#include "iostream"
#include "fstream"

using namespace std;

typedef void (*CallbackFunction)(FILE *fp);

struct UtilsController {
    static int getUserChoice();

    static void clearScreen();

    static void stopBeforeCloseConsole();

    static void shouldContinue(void (*callback)());

    static string getCurrentDate();

    static int calcDateDifference(const string &date1_str, const string &date2_str);

    static string toLocaleString(const double &number);

    static void getDataFromFile(const string &path, CallbackFunction callback);

    static void writeDataToFile(const string &path, CallbackFunction callback);

    static inline string trim(string &str);
};

#endif //LIBRARYPROJECT_UTILS_CONTROLLER_H
