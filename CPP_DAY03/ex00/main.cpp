/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 21:18:03 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/09 12:25:36 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clapTrap1("cristiano");
    ClapTrap clapTrap2;
    
    clapTrap1.attack("hjila");
    clapTrap2.takeDamage(clapTrap1.get_AttackDamage());
    return (0);
}