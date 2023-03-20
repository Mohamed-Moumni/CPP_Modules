#include "PmergeMe.hpp"

void    store_seq(std::vector<int> & vect, std::deque<int> & deck, char **av)
{
    int number;

    for (int i = 0; av[i]; i++)
    {
        number = getNumber(std::string(av[i]));
        vect.push_back(number);
        deck.push_back(number);
    }
}

int     getNumber(std::string number)
{
    int i;
    int sign;

    i = 0;
    sign = 1;
    while (number[i] && number[i] == ' ')
        i++;
    if (number[i] == '-' || number[i] == '+')
    {
        if (number[i] == '-')
            sign *= -1;
        i++;
    }
    while (number[i])
    {
        if (number[i] < '0' || number[i] > '9')
            throw std::runtime_error("Error");
        i++;
    }
    is_integer(number);
    return (atoi(number.c_str()));
}

void    print_sequence(std::vector<int> & vect, bool sorted)
{
    size_t  size;

    size = vect.size();
    if (!sorted)
        std::cout << "Before: ";
    else
        std::cout << "After: ";
    for (size_t i = 0; i < size - 1; i++)
    {
        std::cout << vect[i] << " ";
    }
    std::cout << vect[size-1] << std::endl;
}

void    is_integer(std::string & num)
{
	int	i;
	int	minus;
	int	plus;

	i = 0;
	minus = 0;
	plus = 0;
	while (num[i])
		i++;
	if (num[0] == '-' || num[0] == '+')
	{
		if (num[0] == '-')
			minus = 1;
		if (num[0] == '+')
			plus = 1;
		i -= 1;
	}
	if (i > 10)
        throw std::runtime_error("Error");
	if (i == 10)
        checkcmp(num, plus, minus);
}

void    checkcmp(std::string & num, int plus, int minus)
{
    std::string s;
	if (minus == 1)
    {
        if (num.compare(minus, std::string::npos, std::string(MIN)) > 0)
            throw std::runtime_error("Error");
    }
	else
    {
        if (num.compare(plus, std::string::npos, std::string(MAX)) > 0)
            throw std::runtime_error("Error");
    }
}