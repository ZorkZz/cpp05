#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	Bureaucrat	fry("fry", 1);
	Intern		DontCare;
	AForm		*form;

	try
	{
		form = DontCare.makeForm("RobotomyRequestForm", "Bender");
		fry.signeForm(*form);
		fry.executeForm(*form);
		delete(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		form = DontCare.makeForm("AAAAAAAA", "Bender");
		fry.signeForm(*form);
		fry.executeForm(*form);
		delete(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}