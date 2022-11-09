/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:44:33 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/10 00:04:55 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << "Cat Default Constructor Called." << std::endl;
	this->type = "Cat";
}

Cat::Cat( const Cat & src )
{
	std::cout << "Cat Copy Constructor Called." << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat Destructor Called." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	o << "Cat's type: " << i.get_type() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void Cat::makeSound(void) const
{
	std::cout << "Meow Meow" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */