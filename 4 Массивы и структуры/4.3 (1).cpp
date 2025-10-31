// Многомерные массивы (серия задач) 1

#include <iostream>
using namespace std;

int main()
{
    int numbers[5][6] =
    {
        {1,201,1,4,512,45},
        {7,8,-98,10,11,1008},
        {13,14,0,-23,17,18},
        {19,2,21,98,23,10},
        {100,26,-1,28,-27,3}
    };

    int min = numbers[0][0];
    int max = numbers[0][0];

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 6; ++j) {
            if (numbers[i][j] < min) min = numbers[i][j];
            if (numbers[i][j] > max) max = numbers[i][j];
        }
    }

    cout << min << " " << max;
    return 0;

}