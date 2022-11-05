/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 21:18:03 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/05 22:10:33 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clapTrap1("moha");
    ClapTrap clapTrap2("abdo");

    clapTrap1.attack("abdo");
    clapTrap2.takeDamage(5);
    clapTrap2.beRepaired(15);
    std::cout << clapTrap1 << clapTrap2;
    return (0);
}