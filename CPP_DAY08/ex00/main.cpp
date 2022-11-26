/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:38:45 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/25 18:10:51 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include<vector>
#include<array>

int main(void)
{
    std::array<int, 5> b = {15, 16, 17, 18, 19};
    if (easyfind(b, 9))
        std::cout << "9" << " is finded" << std::endl;
    else
        std::cout << "9" << " is not finded" << std::endl;
    return (0);
}