#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class AForm;
class ShrubberyCreationForm;
class PresidentialPardonForm;
class RobotomyRequestForm;

class Intern
{
	public:
		~Intern();
		Intern();
		AForm *createForm(std::string name_of_form, std::string target_of_form);
		class FormDontExist : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		std::string _forms[3];
};

#endif
