// Удалить, удалить, удалить

#include <iostream>
#include <string>
using namespace std;

class Cat {
private:
    string name;
    int age;
    bool likes_water;
public:
    Cat(string n, int a, int lw) {
        name = n;
        if (a <= 0 || a > 20) {
            throw "Неверные данные!";
        }
        age = a;
        likes_water = (lw == 1);
        cout << "Данные успешно добавлены, привет " << name << "!";
    }
    ~Cat() {
        cout << " Объект с именем: " << name << " был удален" << endl;
    }
};

int main() {
    for (int i = 0; i < 3; i++) {
        string name;
        int age, likes_water;

        cout << "Пожалуйста введите, Имя, возраст, Любит/Не любит воду(1/0) через пробел: " << endl;
        cin >> name >> age >> likes_water;

        try {
            Cat cat(name, age, likes_water);
        } catch (const char* msg) {
            cout << msg << " Попробуйте еще раз!" << endl;
        }
    }
    return 0;
}
