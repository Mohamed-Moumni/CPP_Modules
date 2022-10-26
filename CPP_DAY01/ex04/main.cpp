/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:58:58 by mmoumni           #+#    #+#             */
/*   Updated: 2022/10/26 18:57:04 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedForLosers.hpp"

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string s1,s2,filename;
        std::ifstream fin(av[1]);
        std::string content;
        
        s1 = std::string(av[2]);
        s2 = std::string(av[3]);
        filename = std::string(av[1]) + ".replace";
        if (fin.fail())
        {
            std::cerr << "Error - fail to open " << filename << std::endl;
            return -1;
        }
        std::ofstream fout(filename.c_str());
        if (fout.fail())
        {
            std::cerr << "Error - fail to create " << av[3] << std::endl;
            return -1;
        }
        while (std::getline(fin, content))
        {
            if (fin.eof())
                break ;
            content += "\n";
            if (!s1.compare(""))
                fout << content;
            else
                sed_for_losers(fout, content, s1, s2);
        }
    }
    else
    {
        if (ac < 4)
            std::cout << "Invalid number of arguments !" << std::endl;
        else
            std::cout << "There is too many arguments !" << std::endl;
    }
    return 0;
}