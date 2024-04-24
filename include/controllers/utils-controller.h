//
// Created by phucle on 18/04/2024.
//

#ifndef LIBRARYPROJECT_UTILS_CONTROLLER_H
#define LIBRARYPROJECT_UTILS_CONTROLLER_H

#include "string"

using namespace std;

class UtilsController {
public:
    static int getUserChoice();

    static void clearScreen();

    static void stopBeforeCloseConsole();

    static void shouldContinue(void (*callback)());

    static string getCurrentDate();
};

#endif //LIBRARYPROJECT_UTILS_CONTROLLER_H
