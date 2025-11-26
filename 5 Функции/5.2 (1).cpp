// Палиндром, но лучше!

#include <iostream>
#include <algorithm>
#include <string>


void palindrom_check()
{
    std::string palindrom = "";
    std::cin >> palindrom;
    std::string reversed = palindrom;
    std::reverse(reversed.begin(), reversed.end());
    if (palindrom == reversed)
        std::cout << "Палиндром" << std::endl;
    else
        std::cout << "Не Палиндром" << std::endl;


}
// В точке входа больше ничего не дописываем.
int main()
{
    palindrom_check();
    return 0;
}