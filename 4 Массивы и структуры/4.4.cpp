// Перемещение котов в пространстве

#include <iostream>

int main() {
    int visits[10][10] = {0};
    int x, y;
    while (true) {
        std::cout << "Пожалуйста, введите координаты через пробел: " << std::endl;
        std::cin >> x >> y;
        if (x == 11 && y == 11) break;
        if (x < 0 || x > 9 || y < 0 || y > 9) {
            std::cout << "Ошибка ввода. ";
            continue;
        }
        visits[x][y]++;
    }
    int max = 0, max_x = 0, max_y = 0;
    for (int i = 0; i < 10; ++i)
        for (int j = 0; j < 10; ++j)
            if (visits[i][j] >= max && (visits[i][j] > max || (i > max_x) || (i == max_x && j > max_y))) {
                max = visits[i][j];
                max_x = i;
                max_y = j;
            }
    std::cout << "Самая посещаемая клетка: " << max_x << " " << max_y << ". Посещена число раз: " << max << std::endl;
    return 0;
}
