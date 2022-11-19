/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:33:43 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/19 22:25:25 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

class Form
{
	public:
		class GradeTooHighException:public std::exception
		{
			public:
				const char * what() const throw()
				{
					return "Error:Grade Is Too High";
				}
		};
		class GradeTooLowException:public std::exception
		{
			public:
				const char * what() const throw()
				{
					return "Error: Grade Is Too Low";
				}
		};
		Form();
		Form( Form const & src );
		Form(std::string _name, size_t _gradeSignReq, size_t _gradeExecReq);
		~Form();

		Form &		operator=( Form const & rhs );
		void		beSigned(Bureaucrat const & bc);
		std::string	get_Name() const;
		size_t		getGradeSignReq(void) const;
		size_t		getGradeExecReq(void) const;
		bool		is_signed(void) const;
	private:
		const		std::string Name;
		const		size_t gradeSignReq;
		const		size_t gradeExecReq;
		bool		sign;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */