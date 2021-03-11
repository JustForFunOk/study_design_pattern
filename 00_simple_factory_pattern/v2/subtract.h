#pragma once
#include "operation.h"

class Subtract : public Operation
{
public:
    static double getResult(double num1, double num2) override
    {
        return num1-num2;
    }
};
