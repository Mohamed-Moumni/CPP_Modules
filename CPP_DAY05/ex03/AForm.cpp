/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:33:36 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/17 22:17:47 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
# include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm():Name("RandomName"),gradeSignReq(150),gradeExecReq(150)
{
		
}

AForm::AForm( const AForm & src ):Name(src.Name), gradeSignReq(src.gradeSignReq) ,gradeExecReq(src.gradeExecReq)
{
	if (gradeSignReq > 150 || gradeExecReq > 150)
		throw GradeTooLowException();
	if (gradeExecReq < 1 || gradeSignReq < 1)
		throw GradeTooHighException();
	*this = src;
}

AForm::AForm(std::string _name, size_t _gradeSignReq, size_t  _gradeExecReq):Name(_name),gradeSignReq(_gradeSignReq) ,gradeExecReq(_gradeExecReq)
{
	if (gradeSignReq > 150 || gradeExecReq > 150)
		throw GradeTooLowException();
	if (gradeExecReq < 1 || gradeSignReq < 1)
		throw GradeTooHighException();
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &				AForm::operator=( AForm const & rhs )
{
	if ( this != &rhs )
	{
		this->sign = rhs.sign;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AForm const & i )
{
	if (i.is_signed())
		std::cout << "Name: " << i.get_Name() << " GradeSignedRequired "<< i.getGradeSignReq() << " GradeExecRequired " << i.getGradeExecReq() << " State: true" << std::endl;
	else
		std::cout << "Name: " << i.get_Name() << " GradeSignedRequired "<< i.getGradeSignReq() << " GradeExecRequired " << i.getGradeExecReq() << " State: false" << std::endl;
	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string	AForm::get_Name() const
{
	return (Name);
}

size_t	AForm::getGradeSignReq(void) const
{
	return (gradeSignReq);
}

size_t	AForm::getGradeExecReq(void) const
{
	return (gradeExecReq);
}

bool	AForm::is_signed(void) const
{
	return (sign);	
}

void		AForm::beSigned(Bureaucrat const & bc)
{
	if (bc.getGrade() > this->gradeSignReq)
		throw GradeTooLowException();
	else
		sign = true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */