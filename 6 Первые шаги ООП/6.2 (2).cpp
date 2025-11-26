// Сроки выходят!

#include <iostream>
#include <string>
using namespace std;

class Cat_food {
public:
    string name;
    int day;
    int month;
    int year;

    bool isFresh(int cur_day, int cur_month, int cur_year) {
        if (cur_year < year) return true;
        if (cur_year > year) return false;

        // year == year
        if (cur_month < month) return true;
        if (cur_month > month) return false;

        // year == year и month == month
        if (cur_day < day) return true;
        return false;
    }
};

int main() {
    Cat_food foods[5] = {
        {"Fish", 15, 7, 2025},
        {"Meat", 20, 8, 2025},
        {"Milk", 30, 8, 2025},
        {"Chicken", 28, 8, 2025},
        {"Cheese", 25, 7, 2025}
    };

    int cur_day, cur_month, cur_year;
    cout << "Пожалуйста введите дату: " << endl;
    cin >> cur_day >> cur_month >> cur_year;

    for (int i = 0; i < 5; i++) {
        if (foods[i].isFresh(cur_day, cur_month, cur_year)) {
            cout << "Свежий";
        } else {
            cout << "Не свежий";
        }
        if (i != 4) cout << " ";
    }
    cout << endl;

    return 0;
}
