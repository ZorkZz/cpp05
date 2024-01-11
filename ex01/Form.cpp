#include "Form.hpp"

Form::~Form()
{}

Form::Form(): _name("Basic Form"), _grade_to_signe(150), _grade_to_exeute(150), _is_signed(0)
{
	if (_grade_to_signe > 150 || _grade_to_exeute > 150)
		throw(GradeTooLowException());
	else if (_grade_to_signe < 1 || _grade_to_exeute < 1)
		throw (GradeTooHighException());
}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute): _name(name), _grade_to_signe(grade_to_sign), _grade_to_exeute(grade_to_execute), _is_signed(0)
{
	if (_grade_to_signe > 150 || _grade_to_exeute > 150)
		throw(GradeTooLowException());
	else if (_grade_to_signe < 1 || _grade_to_exeute < 1)
		throw (GradeTooHighException());
}

Form::Form(Form &form): _name(form._name), _grade_to_signe(form._grade_to_signe), _grade_to_exeute(form._grade_to_exeute)
{
	*this = form;
}

Form &Form::operator=(const Form &form)
{
	if (this != &form)
		this->_is_signed = form._is_signed;
	return (*this);
}

void Form::execute(Bureaucrat &bureaucrat)
{
	if (bureaucrat.get_grade() > this->_grade_to_exeute)
		throw (GradeTooLowException());
	if (this->_is_signed)
		std::cout << bureaucrat.get_name() << " execute the form " << this->_name << std::endl;
	else
		std::cout << bureaucrat.get_name() << " couldn't execute the form " << this->_name << "he is not signed" << std::endl;
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.get_grade() > this->_grade_to_signe)
		throw (GradeTooLowException());
	else if (this->_is_signed == 0)
	{
		this->_is_signed = 1;
		std::cout << bureaucrat.get_name() << " signed " << this->_name << std::endl;
	}
	else
		std::cout << bureaucrat.get_name() << " couldn't sign " << this->_name << "because it is already signed";
}


std::string Form::get_name() const
{
	return (this->_name);
}


int Form::get_grade_to_execute() const
{
	return (this->_grade_to_exeute);
}

int Form::get_grade_to_signe() const
{
	return (this->_grade_to_signe);
}

std::ostream	&operator << (std::ostream &os, const Form &form)
{
	os << form.get_name() << ", form grade to sign " << form.get_grade_to_signe() << ", grade to execute " << form.get_grade_to_execute() << std::endl;
	return (os);
}

char const*	Form::GradeTooHighException::what() const throw() {return ("Form::exception : Grade is too high");}

char const*	Form::GradeTooLowException::what() const throw() {return ("Form::exception : Grade is too low");}

