/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:39:57 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/18 19:13:13 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

class ShrubberyCreationForm;
class PresidentialPardonForm;
class RobotomyRequestForm;
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	
}

Intern::Intern( const Intern & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AForm * Intern::makeForm(std::string _name, std::string _target)
{
	AForm *form = new ShrubberyCreationForm();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */