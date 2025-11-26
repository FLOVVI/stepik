// Напишите программу, которая считает среднее арифметическое чисел массива

#include <iostream>
using namespace std;

int main()
{
    int x, sum = 0, count = 0;
    while (cin >> x) {
        sum += x;
        count++;
    }
    cout << sum / count << endl;
    return 0;
}
