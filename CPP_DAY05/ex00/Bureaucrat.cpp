/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:16:20 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/19 13:18:14 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat():Name("RandomName"), grade(150)
{

}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : Name(src.Name)
{
	*this = src;
}

Bureaucrat::Bureaucrat(const std::string & _name, size_t _grade): Name(_name)
{
	if (_grade < 1)
		throw GradeTooHighException();
	else
		this-> grade = _grade;
	if (_grade > 150)
		throw GradeTooLowException();
	else
		this->grade = _grade;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat	&	Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->grade = rhs.grade;
	}
	return *this;
}

std::ostream	&	operator<<( std::ostream & o, Bureaucrat const & i )
{
	std::cout << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Bureaucrat::getName(void) const
{
	return (Name);
}

size_t	Bureaucrat::getGrade(void) const
{
	return (grade);
}
void	Bureaucrat::incrementGrade(void)
{
	if (grade - 1 < 1)
		throw GradeTooHighException();
	else
		grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (grade + 1 > 150)
		throw GradeTooLowException();
	else
		grade++;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */