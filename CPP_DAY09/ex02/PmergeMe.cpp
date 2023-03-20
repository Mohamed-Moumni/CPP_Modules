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

void    MergeInsertSortVect(std::vector<int> & vect, int left, int right)
{
    int mid;

    if (right - left + 1 > 2)
    {
        mid = (right + left) / 2;
        MergeInsertSortVect(vect, left, mid);
        MergeInsertSortVect(vect, mid + 1, right);
        Merge(vect, left, mid, right);
    }
    else
    {
        InsertSort(vect, left, right);
    }
}

void    InsertSort(std::vector<int> & vect, int left, int right)
{
    int i, j;

    i = left + 1;
    for (; i <= right; i++)
    {
        j = i;
        while (j > left && vect[j - 1] > vect[j])
        {
            std::swap(vect[j - 1], vect[j]);
            j--;
        }
    }
}

void    Merge(std::vector<int> & vect, int p, int q, int r)
{
    int L, R, i, j, k;

    L = q - p + 1;
    R = r - q;
    std::vector<int> left(L);
    std::vector<int> right(R);
    for (int i = 0; i < L; i++)
        left[i] = vect[p + i];
    for (int j = 0; j < R; j++)
        right[j] = vect[q + j + 1];
    i = 0;j = 0;k = p;
    while (i < L && j < R)
    {
        if (left[i] <= right[j])
        {
            vect[k] = left[i];
            i++;
        }
        else
        {
            vect[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < L)
    {
        vect[k] = left[i];
        i++;
        k++;
    }
    while (j < R)
    {
        vect[k] = right[j];
        j++;
        k++;
    }
}