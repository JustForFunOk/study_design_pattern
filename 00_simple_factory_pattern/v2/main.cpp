#include <iostream>  // cin cout
#include "factory.h"

int main()
{
    while(1)
    {
        double number1, number2;
        char oper;

        std::cout << "Input number1: ";
        std::cin >> number1;

        std::cout << "Input operator(+,-,*,/): ";
        std::cin >> oper;

        std::cout << "Input number2: ";
        std::cin >> number2;

        std::cout << "Result = " << Operation::getResult(number1, oper, number2) << std::endl;
        std::cout << "--------------" << std::endl;       
    }

    return 0;
}
