// Напишите программу, которая возводит число в степень. Степень и число вводятся пользователем

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int base, power;
    cin >> base >> power;
    cout << pow(base, power) << endl;
    return 0;
}
