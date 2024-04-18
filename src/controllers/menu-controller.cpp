//
// Created by phucle on 18/04/2024.
//
#include "iostream"
#include "../../include/controllers/menu-controller.h"
#include "../../include/controllers/utils-controller.h"
#include "../../include/controllers/reader-controller.h"
#include "../../include/controllers/book-controller.h"
#include "../../include/controllers/statistic-controller.h"
#include "../../include/controllers/ticket-controller.h"
#include "../../include/views/menu-view.h"

void MenuController::handleUserChoice(int choice) {
    ReaderController readerController{};
    BookController bookController{};
    StatisticController statisticController{};
    switch (choice) {
        case 1:
            ReaderController::viewMenuAndExecute();
            break;
        case 2:
            BookController::viewMenuAndExecute();
            break;
        case 3:
            TicketController::viewMenuAndExecute();
            break;
        case 4:
            StatisticController::viewMenuAndExecute();
            break;
        case 0:
            // Kết thúc chương trình
            return;
        default:
            // Xử lý lựa chọn không hợp lệ
            std::cout << "Invalid choice! Please try again." << std::endl;
            break;
    }
}

void MenuController::viewMenuAndExecute() {
    MenuView::displayMenu();

    int choice = UtilsController::getUserChoice();

    MenuController::handleUserChoice(choice);
}
