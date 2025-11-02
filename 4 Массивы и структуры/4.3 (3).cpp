// Многомерные массивы (серия задач) 3

#include <iostream>

int main()
{

    int many_numbers[4][4]
    {
        {-1, 0, -45, 100},
        {34, -14, 9, 24},
        {78, 1, 19, -19},
        {56, -71, 23, -68}
    };

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << many_numbers[j][i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}