/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:26:08 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/11 08:59:49 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string & _name)
{
    std::cout << "ScavTrap" << " Argument Constructor is Called " << std::endl;
    this->Name = _name;
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap " << " Default Constructor is Called " << std::endl;
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    std::cout << "ScavTrap " << " Copy Constructor is Called " << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->Name << " Destructor is Called " << std::endl;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->get_Name() << " in Gate Keeper mode. " << std::endl;
}

ScavTrap & ScavTrap::operator =(ScavTrap const & rhs)
{
    if (this != &rhs)
    {
        this->Name = rhs.Name;
        this->HitPoint = rhs.HitPoint;
        this->EnergyPoint = rhs.EnergyPoint;
        this->AttackDamage = rhs.AttackDamage;
    }
    return *this;
}

void ScavTrap::attack(const std::string & target)
{
	if (this->EnergyPoint > 0)
	{
		std::cout << "ScavTrap " << this->Name << " attacks "<< target << " , causing "<< this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoint -= 1;
	}
	else
		std::cout << this->Name << " can't do anything " << std::endl;
}
