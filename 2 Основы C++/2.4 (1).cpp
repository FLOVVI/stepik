// Анкета друзей

#include <iostream>
int main()
{
    char answer1 = ' ';
    int answer2 = 0;
    char answer3 = ' ';
    char answer4 = ' ';

    // Пример составления анкеты
    std::cout << "Привет! Если ты мой друг скажи, нравится ли мне красный цвет? (y/n)"<< std::endl;
    std::cin >> answer1;

    answer1 == 'y' ? std::cout << "Ты и правда мой друг! Красный мой любимый цвет!"<< std::endl : answer1 == 'n' ? std::cout << "Ты меня не очень хорошо знаешь!"<< std::endl : std::cout << "Такого быть не может!"<< std::endl;

    // Дальше сами! Ваш код ниже:
    std::cout << "Сколько тебе лет?" << std::endl;
    std::cin >> answer2;

    answer2 == 15 ? std::cout << "Ваш возраст: " << answer2 << std::endl : std::cout << "Такого быть не может!" << std::endl;

    std::cout << "Какой из основных цветов RGB модели твой любимый? (r/g/b)" << std::endl;
    std::cin >> answer3;

    answer3 == 'r' ? std::cout << "Отличный цвет!"<< std::endl : answer3 == 'g' ? std::cout << "Отличный цвет!"<< std::endl : answer3 == 'b' ? std::cout << "Отличный цвет!"<< std::endl : std::cout << "Такого быть не может!"<< std::endl;

    std::cout << "Тебе нравятся коты или собаки? (c/d)" << std::endl;
    std::cin >> answer4;

    answer4 == 'c' ? std::cout << "Я тоже люблю котиков! :3"<< std::endl : answer4 == 'd' ? std::cout << "А я больше люблю котиков!"<< std::endl : std::cout << "Такого быть не может!"<< std::endl;

    return 0;
}
