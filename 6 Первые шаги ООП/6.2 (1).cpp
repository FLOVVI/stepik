// Нельзя брать калькулятор? Я сама его напишу!

#include <iostream>
using namespace std;

class Calculations {
public:
    double num1;
    double num2;

    double plus() {
        return num1 + num2;
    }

    double minus() {
        return num1 - num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double devision() {
        if (num2 == 0) {
            cout << "Ошибка! ";
            return 0;
        }
        return num1 / num2;
    }

    double operations(char op) {
        switch (op) {
        case '+':
            return plus();
        case '-':
            return minus();
        case '*':
            return multiply();
        case '/':
            return devision();
        default:
            cout << "Ошибка! ";
            return 0;
        }
    }
};

int main() {
    double a, b;
    char op;

    cout << "Введите число, операцию(+,-,*,/), число через пробел: " << endl;
    cin >> a >> op >> b;

    Calculations calc;
    calc.num1 = a;
    calc.num2 = b;

    double result = calc.operations(op);
    cout << "Результат: " << result << endl;
    return 0;
}
