#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

#include "AForm.hpp"


class PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm(std::string const target);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &form);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &Form);
		virtual void	executeForm(Bureaucrat const &bureaucrat) const;
	
	private:
		PresidentialPardonForm();
		std::string	_target;

};

#endif