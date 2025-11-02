//  Многомерные массивы (серия задач) 4

#include <iostream>

int main()
{
    int numbers[5][5] =
    {
        {1,201,1,4,512},
        {7,8,-98,10,11},
        {13,14,0,-23,17},
        {19,2,21,98,23},
        {100,26,-1,28,-27}
    };

    // Сначала запишем все значения в одномерный массив
    int arr[25];
    int k = 0;
    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 5; ++j)
            arr[k++] = numbers[i][j];

    // Сортировка пузырьком
    for (int i = 0; i < 25 - 1; ++i) {
        for (int j = 0; j < 25 - i - 1; ++j) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Обратно записываем отсортированные значения в двумерный массив
    k = 0;
    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 5; ++j)
            numbers[i][j] = arr[k++];

    // Вывод без пробела в конце строки и без пустой строки после вывода
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << numbers[i][j];
            if (j != 4) std::cout << " ";
        }
        if (i != 4) std::cout << std::endl;
    }

    return 0;
}