//
// Created by phucle on 18/04/2024.
//

#include "../../include/controllers/statistic-controller.h"
#include "../../include/controllers/utils-controller.h"
#include "../../include/controllers/menu-controller.h"
#include "../../include/views/statistic-view.h"

#include <iostream>

void StatisticController::handleUserChoice(int choice) {
    MenuController menuController{};

    switch (choice) {
        case 1:
            std::cout << "1";
            break;
        case 2:
            std::cout << "2";
            break;
        case 3:
            // Xử lý chức năng quản lí phiếu mượn/trả sách
            // Gọi các hàm hoặc class cần thiết ở đây
            std::cout << "3";
            break;
        case 4:
            // Xử lý chức năng thống kê
            // Gọi các hàm hoặc class cần thiết ở đây
            std::cout << "4";
            break;
        case 0:
            UtilsController::clearScreen();
            MenuController::viewMenuAndExecute();
            break;
        default:
            // Xử lý lựa chọn không hợp lệ
            std::cout << "Invalid choice! Please try again." << std::endl;
            break;
    }
}

void StatisticController::viewMenuAndExecute() {
    StatisticView::displayStatisticMenu();

    int choice = UtilsController::getUserChoice();

    StatisticController::handleUserChoice(choice);
}

