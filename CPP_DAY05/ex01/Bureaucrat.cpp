#include "Bureaucrat.hpp"
# include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat():Name("RandomName"), grade(55)
{

}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : Name(src.Name)
{
	*this = src;
}

Bureaucrat::Bureaucrat(const std::string _name, size_t _grade): Name(_name)
{
	if (_grade < 1)
		throw GradeTooHighException();
	else
		this-> grade = _grade;
	if (_grade > 150)
		throw GradeTooLowException();
	else
		this->grade = _grade;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat	&	Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->grade = rhs.grade;
	}
	return *this;
}

std::ostream	&	operator<<( std::ostream & o, Bureaucrat const & i )
{
	std::cout << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Bureaucrat::getName(void) const
{
	return (Name);
}

size_t	Bureaucrat::getGrade(void) const
{
	return (grade);
}
void	Bureaucrat::incrementGrade(void)
{
	if (grade - 1 < 1)
		throw GradeTooHighException();
	else
		grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (grade + 1 > 150)
		throw GradeTooLowException();
	else
		grade++;
}

void Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << Name << " signed " << form.get_Name() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << Name << " couldn't sign " << form.get_Name() << " because " << e.what() << std::endl;
	}
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */