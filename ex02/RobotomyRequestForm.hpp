#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM

#include "AForm.hpp"
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm: public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &form);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &Form);
		virtual void	signeForm(Bureaucrat const &bureaucrat);
		virtual void	executeForm(Bureaucrat const &bureaucrat);
	
	private:
		std::string	_target;

};

#endif