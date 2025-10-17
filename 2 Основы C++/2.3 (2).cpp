// Коты с голубыми, желтыми или зелеными глазами в добрые руки!

#include <iostream>
int main()
{
    char right_eye1 = 'y', right_eye2 = 'g', right_eye3 = 'b'; // b - blue, g - green, y - yellow
    char left_eye1 = 'b', left_eye2 = 'y', left_eye3 = 'y'; // b - blue, g - green, y - yellow

    char catcolor1 = 'b', catcolor2 = 'w', catcolor3 = 'o'; // b - black, w - white, o - orange

    double height1 = 134, height2 = 135, height3 = 19; // высота котиков
    double width1 = 10, width2 = 20, width3 = 12; // ширина котиков

    bool likes_kids1 = true, likes_kids2 = true, likes_kids3 = true; // Любит / не любит детей

    bool cat1 = false, cat2 = false, cat3 = false; // Данной переменной необходимо присвоить результат логического уравнения.

    // Ваш код ниже
    cat1 = ((right_eye1 == 'b' || right_eye1 == 'g') && left_eye1 == 'y' && catcolor1 != 'b' &&
        ((height1 >= 20 && height1 <= 134) || (height1 < 20 && width1 <= 13)) &&
        likes_kids1);

    cat2 = ((right_eye2 == 'b' || right_eye2 == 'g') && left_eye2 == 'y' &&
        catcolor2 != 'b' &&
        ((height2 >= 20 && height2 <= 134) || (height2 < 20 && width2 <= 13)) &&
        likes_kids2);

    cat3 = ((right_eye3 == 'b' || right_eye3 == 'g') && left_eye3 == 'y' &&
        catcolor3 != 'b' &&
        ((height3 >= 20 && height3 <= 134) || (height3 < 20 && width3 <= 13)) &&
        likes_kids3);

    // Код дальше не убирайте ради котиков!
    if (cat1){std::cout << "Вам подходит котик номер 1!";}
    else if (cat2) {std::cout << "Вам подходит котик номер 2!";}
    else if (cat3) {std::cout << "Вам подходит котик номер 3!";}
    else {std::cout << "Извините, у нас пока нет такого котика!";}
}