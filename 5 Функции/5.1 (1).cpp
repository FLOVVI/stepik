// Кот на клавиатуре пишет роман

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Инициализируем вектор с предыдущим содержимым документа
    vector<char> symbols = {'6', ';', '^', 'K'};
    char input;

    // Ввод новых элементов
    while (true) {
        cout << "Новый символ (0 для завершения): " << endl;
        cin >> input;

        if (input == '0') {
            break;
        }

        symbols.push_back(input);
    }

    // Вывод элементов через адреса и указатели
    for (char* ptr = &symbols[0]; ptr != &symbols[symbols.size()]; ptr++) {
        cout << *ptr;

        // Добавляем пробел, если это не последний элемент
        if (ptr != &symbols[symbols.size() - 1]) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}