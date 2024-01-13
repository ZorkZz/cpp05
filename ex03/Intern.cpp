#include "Intern.hpp"

Intern::Intern()
{
	_forms[0] = "PresidentialPardonForm";
	_forms[1] = "RobotomyRequestForm";
	_forms[2] = "ShrubberyCreationForm";
}

Intern::~Intern()
{
}

AForm *Intern::makeForm(std::string name_of_form, std::string target_of_form)
{
	AForm *form = NULL;
	std::string form_name = "NULL";

	for (size_t i = 0; i < 3; i++)
	{
		if (name_of_form == _forms[i])
		{
			form_name = name_of_form;
			std::cout << "Intern create " << name_of_form << std::endl;
		}
	}
	if (form_name == "NULL")
		throw(FormDontExist());
	else if(form_name == "ShrubberyCreationForm")
		form = new ShrubberyCreationForm(target_of_form);
	else if (form_name == "PresidentialPardonForm")
		form = new PresidentialPardonForm(target_of_form);
	else if (form_name == "RobotomyRequestForm")
		form = new RobotomyRequestForm(target_of_form);
	return (form);
}

char const*	Intern::FormDontExist::what() const throw() {return ("Intern::exception : Form don't exist");}
