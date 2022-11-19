/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:53:09 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/19 11:15:29 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm():AForm("ShrubberyForm", 145, 137)
{
	target = "DefTarget_shrubbery";
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ):AForm(src.get_Name(), 145, 137)
{
	*this = src;
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string _name,const std::string _target):AForm(_name, 145,137)
{
	target = _target;
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
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
void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->is_signed())
		throw SignException();
	else if (executor.getGrade() > this->getGradeExecReq())
		throw GradeTooLowException();
	else
	{
		std::ofstream myfile;
		myfile.open(this->target + "_shrubbery");
		myfile << "       ###\n" << "      #o###\n" << "    #####o###\n" << "   #o#\\#|#/###\n" << "    ###\\|/#o#\n" << "     # }|{  #\n" << "       }|{\n";
		myfile.close();
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */