//
// Created by phucle on 18/04/2024.
//

#include "../../include/controllers/reader-controller.h"
#include "../../include/controllers/utils-controller.h"
#include "../../include/controllers/menu-controller.h"
#include "../../include/views/reader-view.h"
#include <iostream>

using namespace std;

void ReaderController::handleUserChoice(int choice) {
    MenuController menuController{};

    switch (choice) {
        case 1:
            cout << "1";
            break;
        case 2:
            // Xử lý chức năng quản lí sách
            // Gọi các hàm hoặc class cần thiết ở đây
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

void ReaderController::viewMenuAndExecute() {
    ReaderView::displayReaderMenu();

    int choice = UtilsController::getUserChoice();

    ReaderController::handleUserChoice(choice);
}

