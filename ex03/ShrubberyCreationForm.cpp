#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery Creation Form", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery Creation Form", 145, 137), _target("no one")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form): AForm(form)
{
	if (this != &form)
		*this = form;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form)
{
	if (this != &form)
	{
		this->_is_signed = form._is_signed;
		this->_target = form._target;
	}
	return (*this);
}

void	ShrubberyCreationForm::executeForm(Bureaucrat const &bureaucrat) const
{
	std::string	file_name;
	if (bureaucrat.get_grade() > this->_grade_to_exeute)
		throw(GradeTooLowException());
	else
	{
		file_name = this->_target + "_shrubbery";
		std::ofstream outfile;
		outfile.open((file_name.c_str()), std::ios_base::app);
		outfile << "   **\n  ****\n ******\n********\n   **\n" << std::endl;
		outfile.close();
	}
}