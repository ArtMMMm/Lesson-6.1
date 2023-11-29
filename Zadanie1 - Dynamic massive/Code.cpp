#include "Header.h"
#include <iostream>
#include <array>

void dynamic_massive()
{
    int x1 = 0;
    int x2 = 0;
    int x3 = 0;
    int x4 = 0;
    int x5 = 0;
    
    std::cout << "Отображение минимального чётного числа.Если нет,то минимального нечётного." << std::endl;
    std::cout << "При некорректном вводе, программа не сработает!(кроме ввода 0)" << std::endl;
    std::cout << "Введите целое число до 9 символов в массив (1/5): ";
    std::cin >> x1;
    std::cout << "Введите целое число до 9 символов в массив (2/5): ";
    std::cin >> x2;
    std::cout << "Введите целое число до 9 символов в массив (3/5): ";
    std::cin >> x3;
    std::cout << "Введите целое число до 9 символов в массив (4/5): ";
    std::cin >> x4;
    std::cout << "Введите целое число до 9 символов в массив (5/5): ";
    std::cin >> x5;
    
    int *massive1 = new int[]{};
    massive1[0] = x1;
    massive1[1] = x2;
    massive1[2] = x3;
    massive1[3] = x4;
    massive1[4] = x5;
    
    zadanie1(massive1);
}

void zadanie1(int mass[])
{
    int y = 0; // подходящее число
    
    int c = 0; // для проверки на чётность, пока не с чем сравнивать
    
    int d = 0; // был ли введён 0
    
    int v = 0; // счётчик
    
    for(int i = 1;i < 6;i++)
    {
        int element = mass[i-1];
        
        v = v + 1;
        
       if (c == 0 && element % 2 == 0) // проверка на чётность, добавление в y
       {
           y = y + element;
           c = c + 1;
       }
        if (c != 0 && element % 2 == 0 && element < y) // сравнение, меньше ли данное чётное число, минимального чётного до этого
        {
            y = y * 0;
            y = y + element;
        }
        if(element == 0) // проверка, был ли введён 0
        {
            d = d + 1;
        }
        if (d == 0 && y == 0 && v == 5) // если чётных небыло, тогда минимальный нечётный
        {
            for(int i = 1;i < 6;i++)
            {
                int element = mass[i-1];
            
                if (c == 0 && element % 2 != 0) // проверка на нечётность, добавление в y
                {
                    y = y + element;
                    c = c + 1;
                }
                 if (c != 0 && element % 2 != 0 && element < y) // сравнение, меньше ли данное нечётное число, минимального нечётного до этого
                 {
                     y = y * 0;
                     y = y + element;
                 }
            }
        }
    }
    std::cout << "Результат: " << std::endl;
    std::cout << y << std::endl;
    
    delete[] mass;
}

