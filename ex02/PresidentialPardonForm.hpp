#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

#include "AForm.hpp"


class PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &form);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &Form);
		virtual void	signeForm(Bureaucrat const &bureaucrat);
		virtual void	executeForm(Bureaucrat const &bureaucrat);
	
	private:
		std::string	_target;

};

#endif