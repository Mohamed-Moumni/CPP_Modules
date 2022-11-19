/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:52:59 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/18 21:40:49 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		ShrubberyCreationForm( const std::string _name,const std::string _target,size_t signGrade, size_t execGrade);
		~ShrubberyCreationForm();

		ShrubberyCreationForm	&	operator=( ShrubberyCreationForm const & rhs );
		void	execute(Bureaucrat const & executor) const;
	private:
		std::string target;
};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */