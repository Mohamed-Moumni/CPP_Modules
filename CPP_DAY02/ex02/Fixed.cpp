/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:10:37 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/01 12:18:45 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed( const Fixed & src )
{
	// std::cout << "Copy Constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed( const int  number)
{
	// std::cout << "Int constructor called" << std::endl;
	this->fixed_point = (number) << Fixed::fraction;
}

Fixed::Fixed( const float number)
{
	// std::cout << "Float constructor called" << std::endl;
	this->fixed_point = roundf((number * (float)(1<<Fixed::fraction)));
	
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	// std::cout << "Copy assignement operator called " << std::endl;
	if ( this != &rhs )
	{
		this->fixed_point = rhs.fixed_point;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
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


bool    Fixed::operator>(const Fixed & rhs)
{
	if (this->toFloat() > rhs.toFloat())
		return (true);
	return (false);
}

bool    Fixed::operator<(const Fixed & rhs)
{
    if (this->toFloat() < rhs.toFloat())
        return (true);
    return (false);
}

bool Fixed::operator>=(const Fixed & rhs)
{
    if (this->toFloat() >= rhs.toFloat())
        return (true);
    return (false);
}

bool Fixed::operator<=(const Fixed & rhs)
{
    if (this->toFloat() <= rhs.toFloat())
        return (true);
    return (false);
}

bool Fixed::operator==(const Fixed & rhs)
{
    if (this->toFloat() == rhs.toFloat())
        return (true);
    return (false);
}

bool Fixed::operator!=(const Fixed & rhs)
{
    if (fixed_point != rhs.fixed_point)
        return (true);
    return (false);
}

Fixed	Fixed::operator+(const Fixed & rhs)
{
	float	result = this->toFloat() + rhs.toFloat();
	return (Fixed(result));
}

Fixed	Fixed::operator-(const Fixed & rhs)
{
	float	result = this->toFloat() - rhs.toFloat();
	return (Fixed(result));
}

Fixed	Fixed::operator*(const Fixed & rhs)
{
	float	result = this->toFloat() * rhs.toFloat();
	return (Fixed(result));
}

Fixed	Fixed::operator/(const Fixed & rhs)
{
	float	result = this->toFloat() / rhs.toFloat();
	return (Fixed(result));	
}

Fixed & Fixed::min(Fixed & numb1, Fixed & numb2)
{
	if (numb1.toFloat() < numb2.toFloat())
		return (numb1);
	return (numb2);
}

Fixed & Fixed::min(const Fixed & numb1, const Fixed & numb2)
{
	if (numb1.toFloat() < numb2.toFloat())
		return ((Fixed &)numb1);
	return ((Fixed &)numb2);
}

Fixed & Fixed::max(const Fixed & numb1, const Fixed & numb2)
{
	if (numb1.toFloat() > numb2.toFloat())
		return ((Fixed &)numb1);
	return ((Fixed &)numb2);
}

Fixed & Fixed::max(Fixed & numb1, Fixed & numb2)
{
	if (numb1.toFloat() > numb2.toFloat())
		return (numb1);
	return (numb2);		
}

Fixed	Fixed::operator++(void)
{
	++fixed_point;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed old = Fixed(this->toFloat());
	this->fixed_point++;
	return (old);
}

Fixed	Fixed::operator--(void)
{
	--fixed_point;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	return (Fixed(fixed_point--));
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */