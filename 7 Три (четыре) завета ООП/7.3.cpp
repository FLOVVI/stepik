// Пра - пра - пра кошка

#include <iostream>
// Расставьте классы родителей и потомков в верном порядке
class Miacidae
{
public:
    void say_meow() { std::cout << "Говорит мау и мурлычит: "; }
};

class Carnivora : public Miacidae
{
public:
    void say_meow() { std::cout << "Говорит что-то близче к мау"; }
};

class Feliformia : public Carnivora
{
public:
    bool knock_of_items_of_Dima_table = true;
    void say_meow() { std::cout << "Говорит что-то вроде мяу"; }
};

class Felidae : public Feliformia
{
public:
    void say_meow() { std::cout << "Говорит МЯУ и рычит"; }
};

class Felinae : public Felidae
{
public:
    void say_meow() { std::cout << "Говорит мяу и мурлычит: Я уронил кружку, убирай"; }
};

// Не меняйте точку входа и реализацию классов
int main()
{
    Felinae cat;
    cat.say_meow();
}