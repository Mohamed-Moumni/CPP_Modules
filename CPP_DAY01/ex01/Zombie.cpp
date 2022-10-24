/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:19:36 by mmoumni           #+#    #+#             */
/*   Updated: 2022/10/24 10:19:38 by mmoumni          ###   ########.fr       */
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