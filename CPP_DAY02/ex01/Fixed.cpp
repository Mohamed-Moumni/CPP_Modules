/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 10:29:51 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/01 21:22:23 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed( const int  number)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = number << fraction;
}

Fixed::Fixed( const float number)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = roundf((number * (float)(1<<Fixed::fraction)));
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed	&	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignement operator called " << std::endl;
	if ( this != &rhs )
	{
		this->fixed_point = rhs.fixed_point;
	}
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixed_point;
}

void	Fixed::setRawBits( int const raw)
{
	this->fixed_point = raw;	
}

float   Fixed::toFloat( void ) const
{
	return ((float)(this->fixed_point) / (float)(1 << Fixed::fraction));
}

int Fixed::toInt( void ) const
{
	return (this->fixed_point >> Fixed::fraction);
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */