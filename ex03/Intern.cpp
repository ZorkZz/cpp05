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

AForm *Intern::createForm(std::string name_of_form, std::string target_of_form)
{
	AForm *form;
	std::string form_name = "NULL";

	for (size_t i = 0; i < _forms->size(); i++)
	{
		if (name_of_form == _forms[i])
			form_name = name_of_form;
	}
	if (form_name == "NULL")
		throw(FormDontExist());
	else if
	return (form);
}