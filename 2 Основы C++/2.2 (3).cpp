// КОТО-строфа

#include <iostream>
int main(){
    char n1 = 'S';
    char n2 = 'A';
    char n3 = 'M';
    unsigned int age1 = 3;
    unsigned int age2 = 2;
    unsigned int age3 = 9;
    bool hates_water1 = true;
    bool hates_water2 = false;
    bool hates_water3 = false;

    std::cout<< "Имя котика: "<< n1 << n2 << n3 << " Возраст котика: " << age1 << " Котик не любит/ любит воду (1/0): "<< hates_water1 << std::endl;
    std::cout<< "Имя котика: "<< n2 << n1 << n3 << " Возраст котика: " << age2 << " Котик не любит/ любит воду (1/0): "<< hates_water2 << std::endl;
    std::cout<< "Имя котика: "<< n2 << n3 << n1 << " Возраст котика: " << age3 << " Котик не любит/ любит воду (1/0): "<< hates_water3 << std::endl;

    return 0;
}