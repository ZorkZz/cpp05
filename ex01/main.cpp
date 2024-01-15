#include "Bureaucrat.hpp"
#include "Form.hpp"

void	to_high(void)
{
	try
	{
		Bureaucrat	bureau(3);
		Form		form("Form", -1, 10);
		form.beSigned(bureau);
		form.execute(bureau);
		std::cout << bureau;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	bureau(3);
		Form		form("Form", 10, -1);
		form.beSigned(bureau);
		form.execute(bureau);
		std::cout << bureau;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	to_low(void)
{
	try
	{
		Bureaucrat	bureau(3);
		Form		form("Form", 151, 10);
		form.beSigned(bureau);
		form.execute(bureau);
		std::cout << bureau;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	bureau(3);
		Form		form("Form", 10, 151);
		form.beSigned(bureau);
		form.execute(bureau);
		std::cout << bureau;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	bureau(150);
		Form		form("Form", 10, 10);
		form.beSigned(bureau);
		form.execute(bureau);
		std::cout << bureau;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	perfect(void)
{
	try
	{
		Bureaucrat	bureau(3);
		Form		form("Form", 5, 10);
		form.beSigned(bureau);
		form.execute(bureau);
		std::cout << bureau;
		std::cout << form;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	bureau(5);
		Form		form("Form", 10, 5);
		form.beSigned(bureau);
		form.execute(bureau);
		std::cout << bureau;
		std::cout << form;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	not_signed(void)
{
	try
	{
		Bureaucrat	bureau(3);
		Form		form("form", 10, 3);

		bureau.executeForm(form);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	main(void)
{
	to_high();
	to_low();
	perfect();
	not_signed();
	return (0);
}