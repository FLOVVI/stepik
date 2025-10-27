// Смотри как я отсортировал книги по алфавиту!

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    // Ввод массива
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int pass = 0; pass < n - 1; ++pass) {
        for (int i = 0; i < n - 1 - pass; ++i) {
            if (arr[i] > arr[i + 1]) {
                // Меняем элементы местами
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    // Вывод результата
    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';

    return 0;
}