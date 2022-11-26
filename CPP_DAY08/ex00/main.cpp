/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:38:45 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/26 10:17:10 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include<vector>
#include<array>
#include <stack>
int main(void)
{
    std::stack<int> b;
    b.push(5);
    b.push(15);
    b.push(52);
    b.push(56);
    if (easyfind(b, 9))
        std::cout << "9" << " is finded" << std::endl;
    else
        std::cout << "9" << " is not finded" << std::endl;
    return (0);
}