// Многомерные массивы (серия задач) 2

#include <iostream>
using namespace std;

int main() {
    int arr[4][4];

    // Вводим массив
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            cin >> arr[i][j];

    // Выводим массив в обратном порядке
    for (int i = 3; i >= 0; --i) {
        for (int j = 3; j >= 0; --j)
            cout << arr[i][j] << " ";
        cout << endl; // каждая строка с новой строки
    }

    return 0;
}
