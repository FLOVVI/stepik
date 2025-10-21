// Коты по комнатам

#include <iostream>


int main()
{

    int rooms_with_cats [10]  {11, 20, 0, 56, 6, 5, 10, 1, 23, 5};
    int room_index;
    int cats_count;


    while (true)
    {

        std::cout << "Номер комнаты: " << std::endl;
        std::cin >> room_index;
        if (room_index > 9 || room_index < 0)
        {
            break;
        }
        std::cout << "Сколько котов переместилось: " << std::endl;
        std::cin >> cats_count;

        if (cats_count < 0 && rooms_with_cats[room_index] + cats_count < 0) {
            break;
        }


        rooms_with_cats [room_index] += cats_count;

    }

    for (int i = 0; i < 10; i++)
    {
        std::cout << rooms_with_cats[i];
        if (i != 9)
        {
            std::cout << " ";
        }

    }

    return 0;
}