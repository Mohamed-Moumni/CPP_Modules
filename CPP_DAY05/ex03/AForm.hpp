/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:33:43 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/18 15:48:26 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>


class Bureaucrat;

class AForm
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
		class SignException:public std::exception
		{
			public:
				const char * what() const throw()
				{
					return "Error: The Form isn't signed";
				}
		};
		AForm();
		AForm( AForm const & src );
		AForm(std::string _name, size_t _gradeSignReq, size_t _gradeExecReq);
		~AForm();

		AForm &			operator=( AForm const & rhs );
		void			beSigned(Bureaucrat const & bc);
		std::string		get_Name() const;
		size_t			getGradeSignReq(void) const;
		size_t			getGradeExecReq(void) const;
		bool			is_signed(void) const;
		virtual void	execute(Bureaucrat const & executor) const = 0;
 	private:
		const		std::string Name;
		const		size_t gradeSignReq;
		const		size_t gradeExecReq;
		bool		sign;
};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif /* ************************************************************ AForm_H */