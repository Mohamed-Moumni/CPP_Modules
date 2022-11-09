/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 21:18:17 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/09 00:45:54 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap():HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
	std::cout << "ClapTrap " << "Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "ClapTrap " << "Copy Constructor Called" << std::endl;
	*this = src;
}

ClapTrap::ClapTrap(std::string const _name): HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
	this->Name = _name;
	std::cout << "ClapTrap " << "Arguments Constructor Called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->Name << " Destructor Called " << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
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

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	o << i.get_Name() << " " << i.get_HitPoint() << " " << i.get_EnergyPoint() << " " << i.get_AttackDamage() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack(const std::string & target)
{
	if (this->EnergyPoint > 0)
	{
		std::cout << "ClapTrap " << this->Name << " attacks "<< target << " , causing "<< this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoint -= 1;
	}
	else
		std::cout << this->Name << " can't do anything " << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoint > 0)
	{
		std::cout << "ClapTrap " << this->Name << " lose " << amount << " of HitPoint ." << std::endl;
		this->HitPoint -= amount;
		if (this->HitPoint < 0)
			this->HitPoint = 0;
	}
	else
		std::cout << "ClapTrap " << this->Name << " Is Dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoint > 0)
	{
		std::cout << "ClapTrap "  << this->Name << " is repairing " << amount << " of hit points back ."<< std::endl;
		this->HitPoint += amount;
		this->EnergyPoint -= 1;
	}
	else
		std::cout << "ClapTrap " << this->Name << " can't do anything " << std::endl;
}

std::string	ClapTrap::get_Name(void) const
{
	return (this->Name);
}

int			ClapTrap::get_HitPoint(void) const
{
	return (this->HitPoint); 
}

int			ClapTrap::get_EnergyPoint(void) const
{
	return (this->EnergyPoint);
}

int			ClapTrap::get_AttackDamage(void) const
{
	return (this->AttackDamage);	
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */