/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:49:21 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/09 09:13:32 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Default Constructor is called." << std::endl;
	
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	std::cout << "DiamondTrap Copy Constructor is Called" << std::endl;
	*this = src;
}

DiamondTrap::DiamondTrap( std::string _name)
{
	std::cout << "DiamondTrap Arguments constructor is Called" << std::endl;
	this->Name = _name;
	ClapTrap::Name = _name + "_" + ClapTrap::Name;
	this->HitPoint = FragTrap::HitPoint;
	this->EnergyPoint = ScavTrap::EnergyPoint;
	this->AttackDamage = FragTrap::AttackDamage;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor is called." << std::endl;	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->Name = rhs.Name;
		this->EnergyPoint = rhs.EnergyPoint;
		this->HitPoint = rhs.HitPoint;
		this->AttackDamage = rhs.AttackDamage;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i )
{
	o << i.get_Name() << " " << i.get_HitPoint() << " " << i.get_EnergyPoint() << " " << i.get_AttackDamage() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	DiamondTrap::WhoAmI()
{
	std::cout << "DiamondTrap's Name: " << this->Name << " ClapTrap's Name: " << ClapTrap::Name << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */