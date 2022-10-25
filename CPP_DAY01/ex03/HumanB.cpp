/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:54:15 by mmoumni           #+#    #+#             */
/*   Updated: 2022/10/25 10:57:23 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::attack(void)
{
    if (!this->weapon)
        std::cout << this->name << " does not have a weapon" << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon & _weapon)
{
    this->weapon = &_weapon;
}

HumanB::HumanB(std::string name):name(name)
{
}