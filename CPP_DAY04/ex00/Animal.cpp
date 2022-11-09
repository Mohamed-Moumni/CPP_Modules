/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:39:07 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/10 00:03:12 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << "Animal Copy constructor Called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << "Animal's Type: " << i.get_type() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Animal::get_type(void) const
{
	return this->type;
}

void	Animal::makeSound(void) const
{
	std::cout << "There is No Animal" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */