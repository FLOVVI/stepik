// График функции


#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <string>

using namespace std;

class Function {
private:
    double x;
    double y;

public:
    Function(double xVal) {
        x = xVal;
        // y = (x+2) / (x^2 + 2x)
        double numerator = x + 2;
        double denominator = x * x + 2 * x;

        if (denominator == 0) {
            y = nan("");
        } else {
            y = numerator / denominator;
        }
    }

    void printPoint() {
        cout << (int)x << " ";

        if (isnan(y)) {
            cout << "-nan";
        } else {
            // Форматируем с 6 знаками, потом убираем лишние нули
            stringstream ss;
            ss << fixed << setprecision(6) << y;
            string str = ss.str();

            // Удаляем лишние нули в конце
            str.erase(str.find_last_not_of('0') + 1, string::npos);
            // Если закончилось на точку, убираем и её
            if (str.back() == '.') {
                str.pop_back();
            }

            cout << str;
        }
        cout << "\n";
    }
};

int main() {
    Function points[10] = {
        Function(-10),
        Function(-9),
        Function(-8),
        Function(-7),
        Function(-6),
        Function(-5),
        Function(-4),
        Function(-3),
        Function(-2),
        Function(-1)
    };

    for (int i = 0; i < 10; i++) {
        points[i].printPoint();
    }

    return 0;
}
