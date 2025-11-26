// Миска с фруктами

#include <iostream>

class Fruit {
public:
    std::string name;
    std::string color;
    int seed_quantity;
    double round_shaped;
};


int main()
{
    Fruit fruit1 = {"Banana", "Yellow", 0, 0.1};
    Fruit fruit2 = {"Orange", "Orange", 6, 0.89};
    Fruit fruit3 = {"Apple", "Red", 4, 0.76};
    std::cout << fruit1.name << " " << fruit2.seed_quantity << " " << fruit3.round_shaped;    return 0;
}