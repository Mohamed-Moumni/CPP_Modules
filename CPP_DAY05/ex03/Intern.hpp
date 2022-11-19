/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:40:01 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/19 13:03:50 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include <exception>

class ShrubberyCreationForm;
class PresidentialPardonForm;
class RobotomyRequestForm;

class Intern
{
	public:
		class InternException:public std::exception
		{
			public:
				const char * what() const throw()
				{
					return "Error:The Form Name doesn't exist.";
				}
		};
		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );
		AForm * makeForm(std::string _name, std::string _target);
		AForm * makePresidentialPardonForm(std::string _name, std::string _target);
		AForm * makeRobotomyRequestForm(std::string _name, std::string _target);
		AForm * makeShrubberyCreationForm(std::string _name, std::string _target);
	private:

};

typedef AForm * (Intern::*poinMemberFunc)(std::string _name, std::string _target);

#endif /* ********************************************************** INTERN_H */