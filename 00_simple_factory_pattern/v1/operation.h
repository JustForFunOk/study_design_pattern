
class Operation
{
public:
    static double getResult(double num1, char oper, double num2)
    {
        double result = 0;
        switch(oper)
        {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
            default:
                break;
        }
    }
};
