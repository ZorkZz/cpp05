#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM

#include "AForm.hpp"
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm: public AForm
{
	public:
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &form);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &Form);
		virtual void	signeForm(Bureaucrat const &bureaucrat);
		virtual void	executeForm(Bureaucrat const &bureaucrat);

};

#endif