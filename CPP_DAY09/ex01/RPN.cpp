#include "RPN.hpp"

void operation(std::stack<int> & stack, char oper)
{
    int val1,val2;

    if (stack.size() > 1)
    {
        val1 = stack.top();
        stack.pop();
        val2 = stack.top();
        stack.pop();
        if (oper == '/')
        {
            if (val1 != 0)
                stack.push(val2 / val1);
            else
            {
                std::cout << "Error\n";
                exit(1);
            }
        }
        if (oper == '+')
        {
            stack.push(val2 + val1);
            return;
        }
        if (oper == '*')
        {
            stack.push(val2 * val1);
            return ;
        }
        if (oper == '-')
        {
            stack.push(val2 - val1);
            return ;
        }
    }
    else
    {
        std::cout << "Error\n";
        exit(1);
    }
}

void    RPN(std::string numbers)
{
    std::stack<int> stack;

    for (size_t i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] != ' ')
        {
            if (numbers[i] >= '0' && numbers[i] <= '9')
            {
                stack.push(numbers[i] - 48);
            }
            else if (numbers[i] == '+')
                operation(stack, '+');
            else if (numbers[i] == '-')
                operation(stack, '-');
            else if (numbers[i] == '*')
                operation(stack, '*');
            else if (numbers[i] == '/')
                operation(stack, '/');
            else
            {
                std::cout << "Error\n";
                exit(1);
            }
        } 
    }
    if (stack.size() > 1)
    {
        std::cout << "Error\n";
        exit(1);
    }
    std::cout << stack.top() << std::endl;
}
