#pragma once
#include "operation.h"
#include "add.h"
#include "subtract.h"
#include "multiply.h"
#include "divide.h"

class Factory
{
public:
    static std::shared_ptr<Operation> createOperator(char oper)
    {
        std::shared_ptr<Operation> operation;
        
        switch(oper)
        {
            case '+':
                operation = std::shared_ptr<Operation>(new Add());
                break;
            case '-':
                operation = std::shared_ptr<Operation>(new Subtract());
                break;
            case '*':
                operation = std::shared_ptr<Operation>(new Multiply());
                break;
            case '/':
                operation = std::shared_ptr<Operation>(new Divide());
                break;
        }

        return operation;
    }

};
