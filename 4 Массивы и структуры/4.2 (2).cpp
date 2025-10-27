// Коты, коты и снова коты!

#include <iostream>
#include <string>
int main()
{
    std::string cat_menu = "fish, fish, beef, salad, fish, wet cat food, fishcake, ham, cheese, beef, dry food with fish flavour, beef, beef, beer";
    int fish = 0, beef = 0;

    size_t pos = 0;
    // ищем все fish
    while ((pos = cat_menu.find("fish", pos)) != std::string::npos) {
        fish++;
        pos += 4; // переходим за найденное "fish"
    }
    pos = 0;
    // ищем все beef
    while ((pos = cat_menu.find("beef", pos)) != std::string::npos) {
        beef++;
        pos += 4;
    }
    std::cout << fish << " " << beef << std::endl;
}
