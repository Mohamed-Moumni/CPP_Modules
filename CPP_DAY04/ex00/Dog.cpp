/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:55:48 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/10 00:04:26 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Dog default Constructor Called" << std::endl;
	this->type = "Dog";
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	o << "Dog's type: " << i.get_type() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound(void) const
{
	std::cout << "Haw Haw" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */