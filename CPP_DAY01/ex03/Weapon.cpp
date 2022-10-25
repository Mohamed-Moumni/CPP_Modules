/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:57:51 by mmoumni           #+#    #+#             */
/*   Updated: 2022/10/25 09:45:19 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{   
    this->setType(type);
}

std::string const & Weapon::getType(void)
{
    return this->type;
}

 void Weapon::setType(std::string type)
 {
    this->type = type;
 }
