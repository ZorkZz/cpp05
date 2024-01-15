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
	size_t	i;

	for (i = 0; i < 3; i++)
	{
		if (name_of_form == _forms[i])
		{
			form_name = name_of_form;
			std::cout << "Intern create " << name_of_form << std::endl;
			break ;
		}
	}
	switch(i)
	{
		case 0:
			form = new PresidentialPardonForm(target_of_form);
			break ;
		case 1:
			form = new RobotomyRequestForm(target_of_form);
			break ;
		case 2:
			form = new ShrubberyCreationForm(target_of_form);
			break ;
		default:
			throw(FormDontExist());
			break ;
	}
	return (form);
}

char const*	Intern::FormDontExist::what() const throw() {return ("Intern::exception : Form don't exist");}
