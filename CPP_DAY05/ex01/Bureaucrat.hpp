#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Form;

class Bureaucrat
{
	public:
		class GradeTooHighException:public std::exception
		{
			public:
				const char *what() const throw(){
					return("Error:Grade Is Too High");
				}
		};
		class GradeTooLowException:public std::exception
		{
			public:
				const char *what() const throw(){
					return("Error: Grade Is Too Low");
				}
		};
		Bureaucrat();
		Bureaucrat( Bureaucrat const & src );
		Bureaucrat(const std::string _name, size_t _grade);
		~Bureaucrat();
		Bureaucrat &		operator=( Bureaucrat const & rhs );
		std::string		getName(void) const;
		size_t	getGrade(void) const;
		void incrementGrade(void);
		void decrementGrade(void);
		void signForm(Form & form);
	private:
		const std::string Name;
		size_t grade;
};


std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */