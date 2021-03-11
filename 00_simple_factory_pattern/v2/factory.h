#pragma once
#include "operation.h"
#include "add.h"
#include "subtract.h"
#include "multiply.h"
#include "divide.h"

class Factory
{
public:
    static Operation* createOperator(char oper)
    {
        Operation* operation = nullptr;
        
        switch(oper)
        {
            case '+':
                operation = new Add();
                break;
            case '-':
                operation = new Subtract();
                break;
            case '*':
                operation = new Multiply();
                break;
            case '/':
                operation = new Divide();
                break;
        }

        return operation;
    }

};
