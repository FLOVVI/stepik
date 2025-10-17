// Благоприятные погодные условия

#include <iostream>
int main()
{
    char weather = ' ';
    std::cin >> weather;

    // Ваш код ниже
    switch (weather)
    {
    case 'r':
        std::cout<<  "Начинается небольшой дождик! Возьмите зонтик!";
        break;
    case 's':
        std::cout<< "На улице солнечно! Не забудьте темные очки! B)";
        break;
    case 'c':
        std::cout<< "Сегодня немного облачно...";
        break;
    case 'w':
        std::cout<< "На улице небольшой ветерок, будьте осторожны.";
        break;
    case 't':
        std::cout<< "СПАСАЙТЕСЬ ВСЕ ИДЕТ ТОРНАДО!!!!";
        break;

    };

    return 0;
}