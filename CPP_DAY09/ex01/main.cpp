#include "RPN.hpp"

int main(int ac, char *av[])
{
    std::vector<char> numbers;

    try
    {
        if (ac != 2)
            throw std::runtime_error("Error");
        std::string rpn(av[1]);
        RPN(rpn);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}