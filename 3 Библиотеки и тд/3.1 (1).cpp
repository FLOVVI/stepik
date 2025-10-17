// Сбежавшие коты

// Отсюда начал делать через нормальную IDLE )

#include <iostream>
int main()
{
    int home = 0;
    int street = 0;
    char location;


    for (int i = 1; i <= 10; i++)
    {
        std::cout << "Введите местонахождение кота:" << std::endl;
        std::cin >> location;
        if (location == 'h')
        {
            home++;
        } else
        {
            street++;
        }
    }

    std::cout << "Сейчас в доме " << home << " котиков, на улице гуляет " << street << " котиков.";


    return 0;
}