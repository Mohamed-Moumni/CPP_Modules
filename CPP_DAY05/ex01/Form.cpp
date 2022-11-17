/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:33:36 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/17 22:17:47 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
# include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form():Name("RandomName"),gradeSignReq(150),gradeExecReq(150)
{
		
}

Form::Form( const Form & src ):Name(src.Name), gradeSignReq(src.gradeSignReq) ,gradeExecReq(src.gradeExecReq)
{
	if (gradeSignReq > 150 || gradeExecReq > 150)
		throw GradeTooLowException();
	if (gradeExecReq < 1 || gradeSignReq < 1)
		throw GradeTooHighException();
	*this = src;
}

Form::Form(std::string _name, size_t _gradeSignReq, size_t  _gradeExecReq):Name(_name),gradeSignReq(_gradeSignReq) ,gradeExecReq(_gradeExecReq)
{
	if (gradeSignReq > 150 || gradeExecReq > 150)
		throw GradeTooLowException();
	if (gradeExecReq < 1 || gradeSignReq < 1)
		throw GradeTooHighException();
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->sign = rhs.sign;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
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

std::string	Form::get_Name() const
{
	return (Name);
}

size_t	Form::getGradeSignReq(void) const
{
	return (gradeSignReq);
}

size_t	Form::getGradeExecReq(void) const
{
	return (gradeExecReq);
}

bool	Form::is_signed(void) const
{
	return (sign);	
}

void		Form::beSigned(Bureaucrat const & bc)
{
	// std::cout <<this->gradeSignReq << std::endl;
	if (bc.getGrade() > this->gradeSignReq)
		throw GradeTooLowException();
	else
		sign = true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */