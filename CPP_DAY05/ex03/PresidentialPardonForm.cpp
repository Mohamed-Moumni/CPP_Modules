/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:39:37 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/18 18:14:03 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialForm", 25, 5)
{
	target = "DefPresidentForm";
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ):AForm("PresidentialForm", 25, 5)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		this->target = rhs.target;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->is_signed())
		throw SignException();
	else if (executor.getGrade() > this->getGradeExecReq())
		throw GradeTooLowException();
	else
	{
		std::cout << this->target << " pardoned by Zaphod Beeblebrox." << std::endl;
	}			
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */