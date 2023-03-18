#include "BitcoinExchange.hpp"

int main(int ac, char *av[])
{
    std::ifstream   ifs;
    std::ifstream   inputf;
    BitcoinExchane  btcExch;

    try
    {
        if (ac != 2)
            throw std::runtime_error("Error");
        ifs.open("data.csv", std::ifstream::in);
        if (!ifs.good())
            throw std::runtime_error("Database not provided");
        btcExch.getData(ifs, 1);
        inputf.open(av[1], std::ifstream::in);
        if (!inputf.good())
            throw std::runtime_error("Error: could not open file.");
        btcExch.getData(inputf, 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}