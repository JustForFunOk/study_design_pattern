#pragma once
#include "operation.h"

class Divide : public Operation
{
public:
    double getResult(double num1, double num2) override
    {
        return num1/num2;
    }
};
