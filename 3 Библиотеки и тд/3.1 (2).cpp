// Секрет прост (часть 1)

#include <iostream>
#include <cmath>

// in main:
int main()
{
    while (true){
        int n;
        bool is_prime = true;

        std::cin >> n;

        if (n <= 0) {
            break;
        }

        if (n <= 1) {
            std::cout << "НЕ простое" << std::endl;
            return 0;
        }

        for (int i = 2; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            std::cout << "ПРОСТОЕ" << std::endl;
        } else {
            std::cout << "НЕ простое" << std::endl;
        }

    }

    return 0;
}