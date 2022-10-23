/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:36:07 by mmoumni           #+#    #+#             */
/*   Updated: 2022/10/23 22:09:20 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(void)
{
    
}

Zombie::~Zombie(void)
{
    std::cout << "I don't need this zombie called :" << this->name  << "Anymore" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << "; BraiiiiiiinnnzzzZ..." << std::endl;   
}

void    Zombie::setter( std::string  name)
{
    this->name = name;   
}