#include "Bureaucrat.hpp"
#include "Form.hpp"

void	to_high(void)
{
	try
	{
		Bureaucrat	bureau(3);
		Form		form("El formularo", -1, 10);
		form.signe(bureau);
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
		Form		form("El formularo", 10, -1);
		form.signe(bureau);
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
		Form		form("El formularo", 151, 10);
		form.signe(bureau);
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
		Form		form("El formularo", 10, 151);
		form.signe(bureau);
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
		Form		form("El formularo", 5, 10);
		form.signe(bureau);
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
		Form		form("El formularo", 10, 5);
		form.signe(bureau);
		form.execute(bureau);
		std::cout << bureau;
		std::cout << form;
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
	return (0);
}