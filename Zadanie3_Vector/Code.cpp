#include "Header.hpp"
#include <iostream>
#include <vector>

void massive()
{
    int x1 = 0;
    int x2 = 0;
    int x3 = 0;
    int x4 = 0;
    int x5 = 0;
    
    std::cout << "Вывод произведения введённых нечётных элементов массива." << std::endl;
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
    
    std::vector<int>massive1;
    massive1.push_back(x1);
    massive1.push_back(x2);
    massive1.push_back(x3);
    massive1.push_back(x4);
    massive1.push_back(x5);
    
    zadanie3(massive1);
}
    
void zadanie3(std::vector<int>massive1)
{
    int a = 0;
    
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    int a4 = 0;
    int a5 = 0;
    
    for(auto& element : massive1)
    {
        // 1
        if (element % 2 != 0 && a == 0)
        {
            a1 = a1 + element;
        }
        else if (a1 == 0)
        {
            a1 = a1 + 1;
        }
        else
        // 2
        if (element % 2 != 0 && a == 1)
        {
            a2 = a2 + element;
        }
        else if (a2 == 0)
        {
            a2 = a2 + 1;
        }
        else
        //3
        if (element % 2 != 0 && a == 2)
        {
            a3 = a3 + element;
        }
        else if (a3 == 0)
        {
            a3 = a3 + 1;
        }
        else
        //4
        if (element % 2 != 0 && a == 3)
        {
            a4 = a4 + element;
        }
        else if (a4 == 0)
        {
            a4 = a4 + 1;
        }
        else
        //5
        if (element % 2 != 0 && a == 4)
        {
            a5 = a5 + element;
        }
        else if (a5 == 0)
        {
            a5 = a5 + 1;
        }
        a = a + 1;
        if ( a1 == 1 && a2 == 1 && a3 == 1 && a4 == 1 && a5 == 1)
        {
            a1 = a1 * 0;
        }
    }
    int sum = a1 * a2 * a3 * a4 * a5;
    
    std::cout << "Результат: ";
    std::cout << sum << std::endl;
}

