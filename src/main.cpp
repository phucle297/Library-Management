#include "../include/controllers/menu-controller.h"
#include "../include/models/book-model.h"
#include "../include/controllers/utils-controller.h"

int main() {
    getBooksMockData();
    MenuController::viewMenuAndExecute();
    UtilsController::stopBeforeCloseConsole();
    return 0;
}
