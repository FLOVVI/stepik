// New Smartphone

#include <iostream>
class Phone
{
public:
    std::string brand;
    int ram;
    int storage;
    std::string display;
};
//Пожайлуста не трогайте точку входа, спасибо!
int main ()
{
    Phone phone = {"YouPhone"};
    phone.brand == "YouPhone" ? std::cout << "Алиса выбрала телефон" : std::cout << "Ещё подумаем...";

    return 0;
}
