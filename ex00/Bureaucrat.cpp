#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("The Office"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const int grade): _name("The Office")
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const std::string name): _name(name), _grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string name, const int grade): _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &bureaucrat)
{
	*this = bureaucrat;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	if (this != &bureaucrat)
		this->_grade = bureaucrat._grade;
	return (*this);
}

Bureaucrat &Bureaucrat::operator++()
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	return (*this);
}

Bureaucrat &Bureaucrat::operator--()
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::get_name()const
{
	return (this->_name);
}

int Bureaucrat::get_grade() const
{
	return (this->_grade);
}

std::ostream	&operator << (std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.get_name() << ", bureacrat grade " << bureaucrat.get_grade() << std::endl;
	return (os);
}

char const*	Bureaucrat::GradeTooHighException::what() const throw() {return ("Bureaucrat::exception : Grade is too high");}

char const*	Bureaucrat::GradeTooLowException::what() const throw() {return ("Bureaucrat::exception : Grade is too low");}
