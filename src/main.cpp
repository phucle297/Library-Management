#include "../include/controllers/menu-controller.h"
#include "../include/models/book-model.h"
#include "../include/models/reader-model.h"
#include "../include/models/ticket-model.h"
#include "../include/controllers/utils-controller.h"

int main() {
    getBooksMockData();
    getReadersMockData();
    getTicketsMockData();
    MenuController::viewMenuAndExecute();
    UtilsController::stopBeforeCloseConsole();
    return 0;
}
