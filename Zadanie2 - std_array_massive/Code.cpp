#include "Header.hpp"
#include <iostream>
#include <array>

void std_array_massive()
{
    int x1 = 0;
    int x2 = 0;
    int x3 = 0;
    int x4 = 0;
    int x5 = 0;
    
    std::cout << "Вывод суммы максимального и минимального элементов введённых в массив." << std::endl;
    std::cout << "При некорректном вводе, программа не сработает!(кроме ввода 0)" << std::endl;
    std::cout << "Введите целое число до 9 символов (1/5): ";
    std::cin >> x1;
    std::cout << "Введите целое число до 9 символов (2/5): ";
    std::cin >> x2;
    std::cout << "Введите целое число до 9 символов (3/5): ";
    std::cin >> x3;
    std::cout << "Введите целое число до 9 символов (4/5): ";
    std::cin >> x4;
    std::cout << "Введите целое число до 9 символов (5/5): ";
    std::cin >> x5;
    
    std::array<int, 5>massive1;
    massive1[0] = x1;
    massive1[1] = x2;
    massive1[2] = x3;
    massive1[3] = x4;
    massive1[4] = x5;
    
    zadanie2(massive1);
}
    
void zadanie2(std::array<int, 5>massive1)
{
    int a = 0;
    
    int b = 0;
    
    int c = 0;
    
    for(auto& element : massive1)
    {
        if (element > a) // поиск максимального элемента
        {
            a = a * 0;
            a = a + element;
        }
    }
    for(auto& element : massive1)
    {
        if (c == 0) // поиск минимального элемента
        {
            b = b + element;
            c = c + 1;
        }
        else if (element < b)
        {
            b = b * 0;
            b = b + element;
        }
    }
    int d = a + b;
    
    std::cout << "Результат: ";
    std::cout << d << std::endl;
}
