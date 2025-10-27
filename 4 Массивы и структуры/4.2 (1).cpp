// Пали- Пало- пал... ПА - ЛИН - ДРОМ.

#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string palindrom = "";
    std::cin >> palindrom;
    std::string reversed = palindrom;
    std::reverse(reversed.begin(), reversed.end());
    if (palindrom == reversed)
        std::cout << "Палиндром" << std::endl;
    else
        std::cout << "Не Палиндром" << std::endl;
    }