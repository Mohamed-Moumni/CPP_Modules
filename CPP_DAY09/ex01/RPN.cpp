#include "RPN.hpp"

void    division(std::stack<int> & stack, int val1, int val2)
{
    if (val1 != 0)
        stack.push(val2 / val1);
    else
        throw std::runtime_error("Divided By Zero");
}

void operation(std::stack<int> & stack, char oper)
{
    int val1,val2;
    if (stack.size() > 1)
    {
        val1 = stack.top();
        stack.pop();
        val2 = stack.top();
        stack.pop();
        switch (oper)
        {
            case '+':
                stack.push(val2 + val1);
                break;
            case '-':
                stack.push(val2 - val1);
                break;
            case '*':
                stack.push(val2 * val1);
                break;
            case '/':
                division(stack, val1, val2);
                break;
        }
    }
    else
        throw std::runtime_error("Error");
}

void    RPN(std::string numbers)
{
    std::stack<int> stack;

    for (size_t i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] != ' ')
        {
            if (!std::isdigit(numbers[i]) &&
                (numbers[i] != '*' && numbers[i] != '/' && numbers[i] != '+' && numbers[i] != '-'))
                    throw std::runtime_error("Error");
            switch (numbers[i])
            {
                case '+':
                    operation(stack, '+');
                    break;
                case '-':
                    operation(stack, '-');
                    break;
                case '*':
                    operation(stack, '*');
                    break;
                case '/':
                    operation(stack, '/');
                    break;
                default:
                    stack.push(numbers[i] - 48);
                    break;
            }
        } 
    }
    if (stack.size() > 1)
        throw std::runtime_error("Error");
    std::cout << stack.top() << std::endl;
}
