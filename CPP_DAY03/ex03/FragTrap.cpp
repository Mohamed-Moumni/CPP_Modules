/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:20:52 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/09 01:03:50 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap()
{
	std::cout << "FragTrap " << "Default Constructor Called "<< std::endl;
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
} 

FragTrap::FragTrap(std::string _name)
{
	std::cout << "FragTrap " << "Argument Constructor Called " << std::endl;
	this->Name = _name;
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap( const FragTrap & src )
{
	std::cout << "FragTrap " << "Copy constructor Called " << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->Name << " Destructor Called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->Name = rhs.get_Name();
		this->AttackDamage = rhs.get_AttackDamage();
		this->HitPoint = rhs.get_HitPoint();
		this->EnergyPoint = rhs.get_EnergyPoint();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, FragTrap const & i )
{
	o << "FragTrap " << i.get_Name() << " " << i.get_HitPoint() << " " << i.get_EnergyPoint() << " " << i.get_AttackDamage() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void			FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->Name << " Request High Five " << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */