// Напишите программу, которая сортирует массив чисел по возрастанию (от меньшего к большему)

#include <iostream>
#include <array>
#include <algorithm>

int main(){
    std::array<int,5> name {1,56,0,3,691};

    std::sort(name.begin(), name.end()); // сортируем по возрастанию

    for (int num : name) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

