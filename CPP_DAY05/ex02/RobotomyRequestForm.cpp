/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:55:36 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/19 22:35:03 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyForm", 72, 45)
{
	target = "DefRobotForm";
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ):AForm("RobotomyForm", 72, 45)
{
	*this = src;	
}

RobotomyRequestForm::RobotomyRequestForm( const std::string _name,const std::string _target,size_t signGrade, size_t execGrade):AForm(_name, signGrade, execGrade)
{
	target = _target;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
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
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->is_signed())
		throw SignException();
	else if (executor.getGrade() > this->getGradeExecReq())
		throw GradeTooLowException();
	else
	{
		int rand_num;
		srand(time(NULL)) ;
		rand_num = rand() % 2;
		std::cout << "Drilling noises\n";
		if(rand_num == 0)
			std::cout << this->target << " robotomized successfully." << std::endl;
		else
			std::cout << this->target << " robotomy failed" << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */