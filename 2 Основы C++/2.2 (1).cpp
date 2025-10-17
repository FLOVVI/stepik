// Посчитаем кошек Димы!

#include <iostream>
int main()
{
    int meters = 2450;
    double meters_per_cat = 0;
    int cat = 0;
    std::cout << "Пожалуйста, введите количество кошек: ";
    std::cin >> cat;

    // Ваш код
    meters_per_cat = meters / cat;


    // Пожалуйса не трогайте этот код
    if (meters_per_cat >= 7 ) {std::cout << "\nМожно приводить еще котиков! " << meters_per_cat;
    }
    else {std::cout << "\nКотикам становится очень тесно! :O "<< meters_per_cat;}

}