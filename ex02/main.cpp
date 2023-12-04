#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

void	robotomy(void)
{
	try
	{
		Bureaucrat fry("fry", 40);
		RobotomyRequestForm form;

		form.signeForm(fry);
		form.executeForm(fry);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat fry("fry", 45);
		RobotomyRequestForm form("bender");

		form.signeForm(fry);
		form.executeForm(fry);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat fry("fry", 73);
		RobotomyRequestForm form("bender");

		form.signeForm(fry);
		form.executeForm(fry);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	fry0("fry0", 72);
		Bureaucrat fry("fry", 45);
		RobotomyRequestForm form("bender");

		form.signeForm(fry0);
		form.executeForm(fry);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	tree()
{
	try
	{
		Bureaucrat fry("fry", 1);
		ShrubberyCreationForm form("idk");

		form.signeForm(fry);
		form.executeForm(fry);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat fry("fry", 137);
		ShrubberyCreationForm form("idk");

		form.signeForm(fry);
		form.executeForm(fry);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat fry("fry", 145);
		ShrubberyCreationForm form("idk");

		form.signeForm(fry);
		form.executeForm(fry);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat fry("fry", 145);
		Bureaucrat fry0("fry0", 137);
		ShrubberyCreationForm form("idk");

		form.signeForm(fry);
		form.executeForm(fry0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	presidential(void)
{
	try
	{
		Bureaucrat fry("fry", 1);
		PresidentialPardonForm form("idk");

		form.signeForm(fry);
		form.executeForm(fry);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat fry("fry", 5);
		PresidentialPardonForm form("idk");

		form.signeForm(fry);
		form.executeForm(fry);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat fry("fry", 25);
		PresidentialPardonForm form("idk");

		form.signeForm(fry);
		form.executeForm(fry);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat fry("fry", 25);
		Bureaucrat fry0("fry0", 5);
		PresidentialPardonForm form("idk");

		form.signeForm(fry);
		form.executeForm(fry0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main()
{
	robotomy();
	tree();
	presidential();
	return (0);
}