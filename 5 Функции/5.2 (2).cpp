// Коты любят кушать

#include <iostream>
#include <array>

// Функция, которая проверяет нормы корма для каждого кота
void cat_check(const std::array<double, 10>& cat_eat)
{
    for (auto eat : cat_eat)
    {
        if (eat >= 60.0)
            std::cout << "На сегодня норма выполнена!" << std::endl;
        else
            std::cout << "Можно кушать еще!" << std::endl;
    }
}

// Точку входа никак не менять
int main()
{
    std::array<double,10> cat_eat = {60.1, 59.0001, 34, 60.0, 29.60, 30.05, 15649.67, 49.17, 56.5656, 70.004 };
    cat_check(cat_eat);
    return 0;
}
