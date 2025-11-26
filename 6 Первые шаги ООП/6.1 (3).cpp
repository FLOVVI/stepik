// У котов один хвост и два глаза вот и все документы...


#include <iostream>
#include <string>
using namespace std;

class Cat {
public:
    string name;
    int paws;
    char color;
    int meows;

    Cat() {}
};

int main() {
    Cat cats[3];

    for (int i = 0; i < 3; i++) {
        cout << "Введите имя кота: " << endl;
        cin >> cats[i].name;

        cout << "Введите количество лапок: " << endl;
        cin >> cats[i].paws;

        cout << "Введите цвет меха (g, o, b): " << endl;
        cin >> cats[i].color;

        cout << "Скажите, котик мяукает? (1/0): " << endl;
        cin >> cats[i].meows;
    }

    for (int i = 0; i < 3; i++) {
        cout << cats[i].name << " " << cats[i].paws << " " << cats[i].color << " " << cats[i].meows << endl;
    }

    return 0;
}
