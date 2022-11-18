/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:40:01 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/18 19:12:45 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class ShrubberyCreationForm;
class PresidentialPardonForm;
class RobotomyRequestForm;

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );
		AForm * makeForm(std::string _name, std::string _target);
	private:

};


#endif /* ********************************************************** INTERN_H */