#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy Request Form", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy Request Form", 72, 45), _target("no one")
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form): AForm(form)
{
	if (this != &form)
		*this = form;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &form)
{
	if (this != &form)
	{
		this->_is_signed = form._is_signed;
		this->_target = form._target;
	}
	return (*this);
}

void RobotomyRequestForm::signeForm(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.get_grade() > this->_grade_to_signe)
		throw(GradeTooLowException());
	else if (this->_is_signed == 0)
	{
		this->_is_signed = 1;
		std::cout << bureaucrat.get_name() << " signed " << this->_name << std::endl;
	}
	else
		std::cout << bureaucrat.get_name() << " couldn't sign " << this->_name << "because it is already signed";
}

void	RobotomyRequestForm::executeForm(Bureaucrat const &bureaucrat)
{
	int	rand;

	if (bureaucrat.get_grade() > this->_grade_to_exeute)
		throw(GradeTooLowException());
	else
	{
		srand(time(NULL));
		rand = std::rand();
		if (rand % 2 == 0)
			std::cout << this->_target << " is now robotomysed" << std::endl;
		else
			std::cout << this->_target << " is not robotomysed" << std::endl;
	}
}