#include "BitcoinExchange.hpp"

int main(int ac, char *av[])
{
    std::ifstream   ifs;
    std::ifstream   inputf;
    BitcoinExchane  btcExch;

    if (ac != 2)
    {
        std::cout << "Error: could not open file.\n";
        exit(1);
    }
    ifs.open("data.csv", std::ifstream::in);
    if (!ifs.good())
    {
        std::cout << "Database not provided\n";
        exit(EXIT_FAILURE);
    }
    btcExch.getData(ifs, 1);
    // std::map<std::string, double>::iterator it;
    // it = btcExch.BitcoinEx.begin();
    // for (;it != btcExch.BitcoinEx.end(); it++)
    // {
    //     std::cout << it->first << "       " << it->second << std::endl;
    // }
    inputf.open(av[1], std::ifstream::in);
    if (!inputf.good())
    {
        std::cout << "Error: could not open file.\n";
        exit(EXIT_FAILURE); 
    }
    btcExch.getData(inputf, 0);
    return (0);
}