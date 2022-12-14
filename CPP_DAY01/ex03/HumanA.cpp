/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:51:49 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/05 09:44:59 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(void)
{
    std::cout << this->name << "attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon & _weapon): 
{
    this->name = name;
    this->_weapon = _weapon;
}