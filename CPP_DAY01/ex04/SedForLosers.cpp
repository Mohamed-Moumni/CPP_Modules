/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedForLosers.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:09:54 by mmoumni           #+#    #+#             */
/*   Updated: 2022/10/26 17:50:43 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedForLosers.hpp"

void    sed_for_losers(std::ofstream &fout, std::string &content, std::string &s1, std::string &s2)
{
    size_t      index;

    index = content.find(s1);
    while (index != std::string::npos)
    {
        content.erase(index, s1.size());
        content.insert(index, s2);
        index = content.find(s1);
    }
    std::cout << content;
    fout << content;
}