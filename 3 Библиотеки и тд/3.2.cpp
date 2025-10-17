// Поиск ошибок

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int i =0;i<10;i++)
    {
        int a =0;
        cout << "Введите число " << endl;
        cin >> a;
        sum+=a;
    }
    cout << "Сумма всех чисел равна: "<< sum << endl;
    cout << "Среднее арифметическое всех чисел равно: "<< sum/10;

    return 0;
}