/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:39:57 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/19 13:06:44 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

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
	if (this != &rhs)
	{
		
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AForm * Intern::makePresidentialPardonForm(std::string _name, std::string _target)
{
	AForm *form = new PresidentialPardonForm(_name, _target);
	return (form);
}

AForm * Intern::makeRobotomyRequestForm(std::string _name, std::string _target)
{
	AForm *form = new RobotomyRequestForm(_name, _target);
	return (form);
}

AForm * Intern::makeShrubberyCreationForm(std::string _name, std::string _target)
{
	AForm *form = new ShrubberyCreationForm(_name, _target);
	return (form);
}

AForm * Intern::makeForm(std::string _name, std::string _target)
{
	int i;
	poinMemberFunc poinfunc[3] = {&Intern::makePresidentialPardonForm, &Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm};
	std::string forms [3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	AForm *form;

	i = 0;
	while (i < 3 && _name != forms[i])
		i++;
	if (i == 3)
		throw InternException();
	else
	{
		std::cout << "Intern creates " << _name << std::endl;
		form = (this->*poinfunc[i])(_name,_target);
	}
	return (form); 
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */