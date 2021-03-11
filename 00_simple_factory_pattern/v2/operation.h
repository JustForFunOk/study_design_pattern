#pragma once

class Operation
{
public:
    virtual ~Operation(){}
    virtual double getResult(double num1, double num2) = 0;
};
