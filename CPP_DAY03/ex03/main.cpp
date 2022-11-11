/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:15:18 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/11 12:11:31 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"
#include"ClapTrap.hpp"
#include"FragTrap.hpp"
#include"ScavTrap.hpp"

int main(void)
{
   DiamondTrap diam("Cristiano");
   
   diam.attack("himda");
   std::cout << diam.get_Name() << std::endl;
   std::cout << diam.get_HitPoint() << std::endl;
   std::cout << diam.get_EnergyPoint() << std::endl;
   std::cout << diam.get_AttackDamage() << std::endl;
   diam.WhoAmI();
   return 0;
}