//
// Created by phucle on 18/04/2024.
//

#include "../../include/controllers/statistic-controller.h"
#include "../../include/controllers/utils-controller.h"
#include "../../include/controllers/menu-controller.h"
#include "../../include/views/statistic-view.h"

#include <iostream>

using namespace std;

void StatisticController::handleUserChoice(int choice) {
    MenuController menuController{};

    switch (choice) {
        case 1:
            cout << "1";
            break;
        case 2:
            cout << "2";
            break;
        case 3:
            // Xử lý chức năng quản lí phiếu mượn/trả sách
            // Gọi các hàm hoặc class cần thiết ở đây
            cout << "3";
            break;
        case 4:
            // Xử lý chức năng thống kê
            // Gọi các hàm hoặc class cần thiết ở đây
            cout << "4";
            break;
        case 0:
            UtilsController::clearScreen();
            MenuController::viewMenuAndExecute();
            break;
        default:
            // Xử lý lựa chọn không hợp lệ
            cout << "Invalid choice! Please try again." << endl;
            break;
    }
}

void StatisticController::viewMenuAndExecute() {
    StatisticView::displayStatisticMenu();

    int choice = UtilsController::getUserChoice();

    StatisticController::handleUserChoice(choice);
}

