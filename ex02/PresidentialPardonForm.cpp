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

void	PresidentialPardonForm::executeForm(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.get_grade() > this->_grade_to_exeute)
		throw(GradeTooLowException());
	else
	{
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
}