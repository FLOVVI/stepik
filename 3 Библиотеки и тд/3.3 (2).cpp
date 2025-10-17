// Это что? Тригонометрия????

#include <iostream>
#include <cmath>

int main() {
    double x;
    std::cout << "Введите значение x: " << std::endl;
    std::cin >> x;

    double numerator = std::cos(x) * std::sin(2 * x);
    double denominator = x * std::exp(x);
    double log7x = std::log(x) / std::log(7);

    double y = std::pow( std::tan(numerator / denominator), log7x );

    std::cout << y << std::endl;
    return 0;
}
