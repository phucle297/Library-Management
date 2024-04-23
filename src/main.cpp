#include "../include/controllers/menu-controller.h"

#include "../include/controllers/utils-controller.h"

int main() {
    MenuController::viewMenuAndExecute();
    UtilsController::stopBeforeCloseConsole();
    return 0;
}
