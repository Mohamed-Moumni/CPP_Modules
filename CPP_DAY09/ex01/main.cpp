#include "RPN.hpp"

int main(int ac, char *av[])
{
    std::vector<char> numbers;

    if (ac != 2)
    {
        std::cout << "Error\n";
        exit(1);
    }
    std::string rpn(av[1]);
    try
    {
        RPN(rpn);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}