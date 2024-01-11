#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

void	robotomy(void)
{
	AForm *form;
	try
	{
		Bureaucrat fry("fry", 40);
		form = new RobotomyRequestForm("Bender");

		form->beSigned(fry);
		form->executeForm(fry);
		delete(form);
	}
	catch(const std::exception& e)
	{
		delete(form);
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat fry("fry", 45);
		form = new RobotomyRequestForm("Bender");

		form->beSigned(fry);
		form->executeForm(fry);
		delete(form);
	}
	catch(const std::exception& e)
	{
		delete(form);
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat fry("fry", 73);
		form = new RobotomyRequestForm("Bender");

		form->beSigned(fry);
		form->executeForm(fry);
		delete(form);
	}
	catch(const std::exception& e)
	{
		delete(form);
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	fry0("fry0", 72);
		Bureaucrat fry("fry", 45);
		form = new RobotomyRequestForm("Bender");

		form->beSigned(fry0);
		form->executeForm(fry);
		delete(form);
	}
	catch(const std::exception& e)
	{
		delete(form);
		std::cerr << e.what() << std::endl;
	}
}

void	tree()
{
	AForm *form;
	try
	{
		Bureaucrat fry("fry", 1);
		form = new ShrubberyCreationForm("idk");

		form->beSigned(fry);
		form->executeForm(fry);
		delete(form);
	}
	catch(const std::exception& e)
	{
		delete(form);
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat fry("fry", 137);
		form = new ShrubberyCreationForm("idk");

		form->beSigned(fry);
		form->executeForm(fry);
		delete(form);
	}
	catch(const std::exception& e)
	{
		delete(form);
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat fry("fry", 145);
		form = new ShrubberyCreationForm("idk");

		form->beSigned(fry);
		form->executeForm(fry);
		delete(form);
	}
	catch(const std::exception& e)
	{
		delete(form);
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat fry("fry", 145);
		Bureaucrat fry0("fry0", 137);
		form = new ShrubberyCreationForm("idk");

		form->beSigned(fry);
		form->executeForm(fry0);
		delete(form);
	}
	catch(const std::exception& e)
	{
		delete(form);
		std::cerr << e.what() << std::endl;
	}
}

void	presidential(void)
{
	AForm *form;
	try
	{
		Bureaucrat fry("fry", 1);
		form = new PresidentialPardonForm("idk");

		form->beSigned(fry);
		form->executeForm(fry);
		delete(form);
	}
	catch(const std::exception& e)
	{
		delete(form);
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat fry("fry", 5);
		form = new PresidentialPardonForm("idk");

		form->beSigned(fry);
		form->executeForm(fry);
		delete(form);
	}
	catch(const std::exception& e)
	{
		delete(form);
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat fry("fry", 25);
		form = new PresidentialPardonForm("idk");

		form->beSigned(fry);
		form->executeForm(fry);
		delete(form);
	}
	catch(const std::exception& e)
	{
		delete(form);
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat fry("fry", 25);
		Bureaucrat fry0("fry0", 5);
		form = new PresidentialPardonForm("idk");

		form->beSigned(fry);
		form->executeForm(fry0);
		delete(form);
	}
	catch(const std::exception& e)
	{
		delete(form);
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