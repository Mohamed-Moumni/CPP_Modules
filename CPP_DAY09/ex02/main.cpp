#include "PmergeMe.hpp"

int main(int ac, char *av[])
{
    try
    {
        std::deque<int>     deque;
        std::vector<int>    vect;
        double start;
        if (ac < 2)
            throw std::runtime_error("Invalid Arguments");
        start = getTimeOfnow();
        store_seq_to_vect(vect, &av[1]);
        print_vector(vect, false);
        MergeInsertSortVect(vect, 0, vect.size() - 1);
        print_vector(vect, true);
        std::cout << "Time to process a range of " << vect.size() << " elements with std::vector<int> : " << std::setprecision(5) << std::fixed << (getTimeOfnow() - start) * 1000000.00 << " us\n";
        start = getTimeOfnow();
        store_seq_to_deque(deque, &av[1]);
        print_deck(deque, false);
        MergeInsertSortdeck(deque, 0, deque.size() - 1);
        print_deck(deque, true);
        std::cout << "Time to process a range of " << deque.size() << " elements with std::deque<int> : " << std::setprecision(5) << std::fixed << (getTimeOfnow() - start) * 1000000.00 << " us\n";  
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}