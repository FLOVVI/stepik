// Секрет Прост (Часть финальная)

#include <iostream>
#include <string>

int main()
{
    std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string word;
    std::getline(std::cin, word);
    int key[4] = {1, 3, 4, 7};

    for (int i = 0; i < word.size(); ++i) {
        if (isupper(word[i])) {
            int idx = word[i] - 'A';
            int shift = key[i % 4];
            idx = (idx + shift) % 26;
            word[i] = 'A' + idx;
        }
    }
    std::cout << word;
    return 0;
}