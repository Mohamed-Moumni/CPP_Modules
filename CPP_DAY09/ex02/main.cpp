#include "PmergeMe.hpp"

int main(int ac, char *av[])
{
    try
    {
        std::deque<int> deck;
        std::vector<int> vect;

        if (ac < 2)
            throw std::runtime_error("Invalid Arguments");
        store_seq(vect, deck, &av[1]);
        print_sequence(vect, false);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}