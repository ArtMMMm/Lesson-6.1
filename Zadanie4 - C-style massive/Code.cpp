#include "Header.hpp"
#include <iostream>

void c_style_massive()
{
    char massive[]{"abcde"};
    
    char z1 = '0';
    char z2 = '0';
    char z3 = '0';
    char z4 = '0';
    char z5 = '0';
    
    std::cout << "2 введённых элемента массива меняются местами." << std::endl;
    std::cout << "При некорректном вводе, программа не сработает!" << std::endl;
    std::cout << "Введите элемент в массив (1/5): ";
    std::cin >> z1;
    std::cout << "Введите элемент в массив (2/5): ";
    std::cin >> z2;
    std::cout << "Введите элемент в массив (3/5): ";
    std::cin >> z3;
    std::cout << "Введите элемент в массив (4/5): ";
    std::cin >> z4;
    std::cout << "Введите элемент в массив (5/5): ";
    std::cin >> z5;
    
    massive[0] = z1;
    massive[1] = z2;
    massive[2] = z3;
    massive[3] = z4;
    massive[4] = z5;
    
    int leight = std::size(massive);
    
    zadanie4(massive, leight);
}
    
void zadanie4(char massive[], int leight)
{
    char x1 = '0';
    char x2 = '0';
    
    std::cout << "Введите элемент массива 1: ";
    std::cin >> x1;
    std::cout << "Введите элемент массива 2: ";
    std::cin >> x2;
    
    int a = 0;
    int b = 0;
   
    for(int i = 0;i < leight;i++)
   {
       if(massive[i] == x1)
       {
           a = a + i;
       }
       
       if(massive[i] == x2)
       {
           b = b + i;
       }
   }
    
    massive[a] = x2;
    massive[b] = x1;
      
    std::cout << "Результат: " << std::endl;
    
    for(int i = 0;i < leight;i++)
    {
        std::cout << massive[i];
    }
    std::cout << "" << std::endl;
}
