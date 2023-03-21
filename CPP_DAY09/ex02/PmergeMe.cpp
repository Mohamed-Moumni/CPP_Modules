#include "PmergeMe.hpp"

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
            throw std::runtime_error("Error");
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

double   getTimeOfnow(void)
{
    struct timeval time;

    gettimeofday(&time, NULL);
    return(static_cast<double> (time.tv_sec) + static_cast<double>(time.tv_usec / 1000000.00));
}

void    store_seq_to_vect(std::vector<int> & vect, char **av)
{
    int number;

    for (int i = 0; av[i]; i++)
    {
        number = getNumber(std::string(av[i]));
        vect.push_back(number);
    }
}

void    store_seq_to_deque(std::deque<int> & deque, char **av)
{
    int number;

    for (int i = 0; av[i]; i++)
    {
        number = getNumber(std::string(av[i]));
        deque.push_back(number);
    }
}

void    print_vector(std::vector<int> & vect, bool sorted)
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

void    print_deck(std::deque<int> & deque, bool sorted)
{
    std::deque<int>::iterator it;

    it = deque.begin();
    if (!sorted)
        std::cout << "Before: ";
    else
        std::cout << "After: ";
    for (; it != deque.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void    MergeInsertSortVect(std::vector<int> & vect, int left, int right)
{
    int mid;

    if (right - left + 1 > 2)
    {
        mid = (right + left) / 2;
        MergeInsertSortVect(vect, left, mid);
        MergeInsertSortVect(vect, mid + 1, right);
        MergeVect(vect, left, mid, right);
    }
    else
    {
        InsertSortVect(vect, left, right);
    }
}

void    InsertSortVect(std::vector<int> & vect, int left, int right)
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

void    MergeVect(std::vector<int> & vect, int p, int q, int r)
{
    int L, R, i, j, k;

    L = q - p + 1;
    R = r - q;
    std::vector<int> left(vect.begin() + p, vect.begin() + q + 1);
    std::vector<int> right(vect.begin() + q + 1, vect.begin() + r + 1);
    i = 0;j = 0;k = p;
    while (i < L && j < R)
    {
        if (left[i] <= right[j])
            vect[k] = left[i++];
        else
            vect[k] = right[j++];
        k++;
    }
    while (i < L)
    {
        vect[k] = left[i++];
        k++;
    }
    while (j < R)
    {
        vect[k] = right[j++];
        k++;
    }
}

void    MergeInsertSortdeck(std::deque<int> & deque, int left, int right)
{
    int mid;

    if (right - left + 1 > 2)
    {
        mid = (right + left) / 2;
        MergeInsertSortdeck(deque, left, mid);
        MergeInsertSortdeck(deque, mid + 1, right);
        Mergedeck(deque, left, mid, right);
    }
    else
    {
        InsertSortdeck(deque, left, right);
    }
}

void    Mergedeck(std::deque<int> & deque, int p, int q, int r)
{
    int L, R, i, j, k;

    L = q - p + 1;
    R = r - q;
    std::deque<int> left(deque.begin() + p, deque.begin() + q + 1);
    std::deque<int> right(deque.begin() + q + 1, deque.begin() + r + 1);
    i = 0;j = 0;k = p;
    while (i < L && j < R)
    {
        if (left[i] <= right[j])
            deque[k] = left[i++];
        else
            deque[k] = right[j++];
        k++;
    }
    while (i < L)
    {
        deque[k] = left[i++];
        k++;
    }
    while (j < R)
    {
        deque[k] = right[j++];
        k++;
    }
}

void    InsertSortdeck(std::deque<int> & deque, int left, int right)
{
    int i, j;

    i = left + 1;
    for (; i <= right; i++)
    {
        j = i;
        while (j > left && deque[j - 1] > deque[j])
        {
            std::swap(deque[j - 1], deque[j]);
            j--;
        }
    }  
}