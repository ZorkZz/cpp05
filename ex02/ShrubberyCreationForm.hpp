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
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &form);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &Form);
		virtual void	signeForm(Bureaucrat const &bureaucrat);
		virtual void	executeForm(Bureaucrat const &bureaucrat);
	
	private:
		std::string _target;

};

#endif