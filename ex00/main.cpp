#include "Bureaucrat.hpp"

void	to_high(void)
{
	try
	{
		Bureaucrat bureau(0);
		std::cout << bureau;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat bureau(1);
		std::cout << bureau;
		++bureau;
		std::cout << bureau;
		++bureau;
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
		Bureaucrat bureau(151);
		std::cout << bureau;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat bureau(150);
		std::cout << bureau;
		--bureau;
		std::cout << bureau;
		--bureau;
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
		Bureaucrat bureau(50);
		std::cout << bureau;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat bureau(10);
		std::cout << bureau;
		--bureau;
		std::cout << bureau;
		--bureau;
		std::cout << bureau;
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