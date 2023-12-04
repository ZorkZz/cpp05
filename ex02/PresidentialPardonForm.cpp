#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Persidential Pardon Form", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(): AForm("Persidential Pardon Form", 25, 5), _target("no one")
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form): AForm(form)
{
	if (this != &form)
		*this = form;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &form)
{
	if (this != &form)
	{
		this->_is_signed = form._is_signed;
		this->_target = form._target;
	}
	return (*this);
}

void PresidentialPardonForm::signeForm(Bureaucrat const &bureaucrat)
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

void	PresidentialPardonForm::executeForm(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.get_grade() > this->_grade_to_exeute)
		throw(GradeTooLowException());
	else
	{
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
}