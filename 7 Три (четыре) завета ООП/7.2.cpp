// Что-о? Площади тоже считать нужно?

#include <iostream>
#include <iomanip>

class Figure {
private:
    int r, h;
    double a;
    std::string name;

public:
    void square(double a, int h) {
        this->a = a;
        this->h = h;
        this->name = "Треугольник";
        double area = (a * h) / 2.0;
        std::cout << "Фигура: " << name << ". Площадь равна : " << std::fixed << std::setprecision(2) << area << std::endl;
    }

    void square(double a) {
        this->a = a;
        this->name = "Квадрат";
        double area = a * a;
        std::cout << "Фигура: " << name << ". Площадь равна : " << std::fixed << std::setprecision(4) << area << std::endl;
    }

    void square(int r) {
        this->r = r;
        this->name = "Круг";
        double pi = 3.14;        double area = pi * r * r;
        std::cout << "Фигура: " << name << ". Площадь равна : " << std::fixed << std::setprecision(2) << area << std::endl;
    }
};

int main()
{
    Figure figure;
    figure.square(6.54, 4);
    figure.square(7.123);
    figure.square(9);
    return 0;
}