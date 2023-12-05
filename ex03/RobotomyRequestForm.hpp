#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM

#include "AForm.hpp"
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm: public AForm
{
	public:
		RobotomyRequestForm(std::string const target);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &form);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &Form);
		void	executeForm(Bureaucrat const &bureaucrat) const;
	
	private:
		RobotomyRequestForm();
		std::string	_target;
};

#endif