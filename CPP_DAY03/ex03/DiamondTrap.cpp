/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:49:21 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/11 12:08:31 by mmoumni          ###   ########.fr       */
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
	ClapTrap::Name = _name + "_clap_name";
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 30;
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
std::string	DiamondTrap::get_Name(void) const
{
	return (this->Name);
}

int			DiamondTrap::get_HitPoint(void) const
{
	return (this->HitPoint); 
}

int			DiamondTrap::get_EnergyPoint(void) const
{
	return (this->EnergyPoint);
}

int			DiamondTrap::get_AttackDamage(void) const
{
	return (this->AttackDamage);	
}

/* ************************************************************************** */