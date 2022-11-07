/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 21:18:03 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/07 09:15:13 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clapTrap1("moha");
    ClapTrap clapTrap2("abdo");

    clapTrap1.attack("abdo");
    clapTrap2.takeDamage(clapTrap1.get_AttackDamage());
    clapTrap2.takeDamage(10);
    clapTrap2.takeDamage(10);
    std::cout << clapTrap1 << std::endl;
    std::cout << clapTrap2 << std::endl;
    return (0);
}