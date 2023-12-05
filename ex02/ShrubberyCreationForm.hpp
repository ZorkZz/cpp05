#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

#include "AForm.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <fstream>  


class ShrubberyCreationForm: public AForm
{
	public:
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &form);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &Form);
		virtual void	executeForm(Bureaucrat const &bureaucrat) const;
	
	private:
		ShrubberyCreationForm();
		std::string _target;

};

#endif