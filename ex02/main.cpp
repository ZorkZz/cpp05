#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"

void	robotomy(void)
{
	try
	{
		Bureaucrat arf("coock", 100);
		RobotomyRequestForm form;

		form.signeForm(arf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	
}

int	main()
{
	robotomy();
	return (0);
}