#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	*this = src;
}

Bureaucrat::Bureaucrat(const std::string & _name, unsigned int _grade): Name(_name)
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

// Bureaucrat::GradeTooHighException::catchTooHigh(void): std::runtime_error("error"){}

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

unsigned int	Bureaucrat::getGrade(void) const
{
	return (grade);
}
void	Bureaucrat::incrementGrade(void)
{
	grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	grade++;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */