#ifndef FORM_H
#define FORM_H


#include "Bureaucrat.hpp"

class Form
{
	public:
		Form();
		~Form();
		Form(Form &form);
		Form(std::string name, int grade_to_sign, int grade_to_execute);
		Form &operator=(const Form &Form);
		std::string get_name() const;
		int	get_grade_to_signe() const;
		int	get_grade_to_execute() const;
		void	signe(Bureaucrat &bureaucrat);
		void	execute(Bureaucrat &bureaucrat);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
	private:
		std::string const	_name;
		int			const	_grade_to_signe;
		int			const	_grade_to_exeute;
		bool				_is_signed;
};

std::ostream	&operator << (std::ostream &os, const Form &form);


#endif