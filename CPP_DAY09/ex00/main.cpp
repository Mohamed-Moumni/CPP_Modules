/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:13:19 by mmoumni           #+#    #+#             */
/*   Updated: 2023/03/21 15:13:20 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char *av[])
{
    std::ifstream   ifs;
    std::ifstream   inputf;
    std::map<std::string, double, std::greater<std::string> > BitcoinEx;
    (void)av;
    try
    {
        if (ac != 2)
            throw std::runtime_error("Error");
        ifs.open("data.csv", std::ifstream::in);
        if (!ifs.good())
            throw std::runtime_error("Database not provided");
        getData(BitcoinEx, ifs, 1);
        inputf.open(av[1], std::ifstream::in);
        if (!inputf.good())
            throw std::runtime_error("Error: could not open file.");
        getData(BitcoinEx, inputf, 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}