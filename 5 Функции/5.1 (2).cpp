// Чистка строк

#include <iostream>
#include <string>
#include <array>

int main()
{
    std::array<char,10> numbers = {'0','1','2','3','4','5','6','7','8','9'};
    std::string words = "";

    // Читаем всю строку со входа
    std::getline(std::cin, words);

    // Удаляем все цифры из строки
    for (int i = 0; i < words.length(); i++) {
        for (int j = 0; j < numbers.size(); j++) {
            if (words[i] == numbers[j]) {
                words.erase(i, 1);
                i--;
                break;
            }
        }
    }

    // Выводим результат
    std::cout << words << std::endl;

    return 0;
}