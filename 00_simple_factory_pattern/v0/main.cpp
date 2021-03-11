#include <iostream>  // cin cout

int main()
{
    while(1)
    {
        double number1, number2, result;
        char oper;

        std::cout << "Input number1: ";
        std::cin >> number1;

        std::cout << "Input operator(+,-,*,/): ";
        std::cin >> oper;

        std::cout << "Input number2: ";
        std::cin >> number2;

        switch(oper)
        {
            case '+':
                result = number1 + number2;
                break;
            case '-':
                result = number1 - number2;
                break;
            case '*':
                result = number1 * number2;
                break;
            case '/':
                result = number1 / number2;
                break;
            default:
                break;
        }

        std::cout << "Result = " << result << std::endl;
        std::cout << "--------------" << std::endl;       
    }

    return 0;
}
