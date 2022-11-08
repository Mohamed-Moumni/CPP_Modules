/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:49:21 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/08 15:18:08 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap()
{
	
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	*this = src;
}

DiamondTrap::DiamondTrap( std::string _name)
{
	this->Name = _name;
	ClapTrap::Name = _name + "_clap_name";
	this->HitPoint = FragTrap::HitPoint;
	this->EnergyPoint = ScavTrap::EnergyPoint;
	this->AttackDamage = FragTrap::AttackDamage;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	
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
	o << "Value = " << i.get_AttackDamage();
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