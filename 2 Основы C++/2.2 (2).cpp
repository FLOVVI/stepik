// Площадь круга

#include <iostream>
int main() {
    double pi = 3.14;
    int rad = 0;
    std::cout << "Введите радиус круга: ";
    std::cin >> rad;

    // Ваш код

    double s = pi * rad * rad;

    std::cout << "\nПлощадь круга равна: " << s;

    return 0;
}