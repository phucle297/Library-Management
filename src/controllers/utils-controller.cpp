#include "iostream"
#include "chrono"
#include "cstdio"
#include "string"
#include "../../include/controllers/utils-controller.h"

using namespace std;

int UtilsController::getUserChoice() {
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}

void UtilsController::clearScreen() {
#ifdef WIN32
    system("cls");
#else
    system("clear");
#endif
}

void UtilsController::stopBeforeCloseConsole() {
#ifdef WIN32
    system("pause");
#else
    system("read");
#endif
}

void UtilsController::shouldContinue(void (*callback)()) {
    cout << "Do you want to continue? (Y/N)" << endl;
    char flag;
    cin >> flag;

    if (flag == 'y' || flag == 'Y') {
        callback();
    }
}

string UtilsController::getCurrentDate() {
    time_t rawtime;
    tm *timeinfo;
    char buffer[10];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, 80, "%Y-%m-%d", timeinfo);
    return buffer;
}

int UtilsController::calcDateDifference(const string &date1, const string &date2) {
    string dateStart, dateEnd;
    if (date1 > date2) {
        dateStart = date2;
        dateEnd = date1;
    } else {
        dateStart = date1;
        dateEnd = date2;
    }

    int date1_year = stoi(dateStart.substr(0, 4));
    int date1_month = stoi(dateStart.substr(5, 2));
    int date1_day = stoi(dateStart.substr(8, 2));

    int date2_year = stoi(dateEnd.substr(0, 4));
    int date2_month = stoi(dateEnd.substr(5, 2));
    int date2_day = stoi(dateEnd.substr(8, 2));

    tm date1_tm = {0};
    date1_tm.tm_year = date1_year - 1900;
    date1_tm.tm_mon = date1_month - 1;
    date1_tm.tm_mday = date1_day;

    tm date2_tm = {0};
    date2_tm.tm_year = date2_year - 1900;
    date2_tm.tm_mon = date2_month - 1;
    date2_tm.tm_mday = date2_day;

    // Convert dates to time_points
    auto date1_tp = chrono::system_clock::from_time_t(mktime(&date1_tm));
    auto date2_tp = chrono::system_clock::from_time_t(mktime(&date2_tm));

    // Calculate difference in days
    auto duration = date2_tp - date1_tp;
    int difference = (int) chrono::duration_cast<chrono::hours>(duration).count() / 24;

    return difference;
}

string UtilsController::toLocaleString(const double &number) {
    string str = to_string((int) number);
    int n = (int) str.length();
    int commaCount = (n - (number < 0 ? 1 : 0) - 1) / 3;

    for (int i = 1; i <= commaCount; ++i) {
        str.insert(n - i * 3, ",");
    }
    return str;
}