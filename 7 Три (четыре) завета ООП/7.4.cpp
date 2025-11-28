// Выпускной

#include <iostream>
// Ваш абсрактный класс тут
class Card_Text
{
public:
    virtual void part1() = 0;
    virtual void part2() = 0;
    virtual void part3() = 0;
    virtual void part4() = 0;
    virtual void part5() = 0;
    virtual void part6() = 0;
    virtual void part7() = 0;
};


class Part1_2 : public Card_Text
{
public:
    void part1() { std::cout << "Алиса, Ты - большая молодец!" << std::endl; }
    void part2() { std::cout << "Ты достигла огромных успехов, и мы все очень гордимся тобой!" << std::endl; }
    virtual void part3() = 0;
    virtual void part4() = 0;

};
class Part3_4 : public Part1_2
{
public:
    void part3() { std::cout << "Огромное спасибо тебе, что помогала с котиками, даже когда была занята подготовкой." << std::endl; }
    void part4() { std::cout << "Благодаря тебе пушистики нашли любящий дом и хорошие семьи." << std::endl; }
    virtual void part5() = 0;
    virtual void part6() = 0;
    virtual void part7() = 0;
};
class Part5_6_7 : public Part3_4
{
public:
    void part5() { std::cout << "Ты - самый яркий и целеустремленный человек, которого я встречал!" << std::endl; }
    void part6() { std::cout << "Удачи тебе на этом сложном пути, у тебя обязательно все получиться!" << std::endl; }
    void part7() { std::cout << "Твой дядя - Дима."; }
};
int main()
{
    Part5_6_7 card;
    card.part1(); card.part2(); card.part3(); card.part4(); card.part5(); card.part6(); card.part7();

}