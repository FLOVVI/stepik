// Напишите программу, которая в массиве находит максимальный элемент кратный пяти.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> arr;
    int x;
    while (cin >> x) {
        arr.push_back(x);
    }

    int max5 = INT_MIN;
    for (int n : arr) {
        if (n % 5 == 0 && n > max5) {
            max5 = n;
        }
    }

    cout << max5 << endl;
    return 0;
}