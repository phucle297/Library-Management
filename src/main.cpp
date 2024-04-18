#include "../include/views/menu-view.h"
#include "../include/controllers/menu-controller.h"
#include "../include/views/reader-view.h"
#include <cstdio>
#include <iostream>

#include "../include/controllers/utils-controller.h"

int main() {
    MenuController::viewMenuAndExecute();
    UtilsController::stopBeforeCloseConsole();
    return 0;
}
