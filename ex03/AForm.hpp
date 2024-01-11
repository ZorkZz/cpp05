#ifndef AFORM_H
#define AFORM_H


#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm();
		virtual ~AForm();
		AForm(const AForm &form);
		AForm(std::string name, int grade_to_sign, int grade_to_execute);
		AForm &operator=(const AForm &Form);
		std::string get_name() const;
		int	get_grade_to_signe() const;
		int	get_grade_to_execute() const;
		void	beSigned(Bureaucrat &bureaucrat);
		virtual void	executeForm(Bureaucrat const &bureaucrat) const = 0;
		bool	is_signed() const;
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
		class AlreadySigned : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
	protected:
		std::string const	_name;
		int			const	_grade_to_signe;
		int			const	_grade_to_exeute;
		bool				_is_signed;
};

std::ostream	&operator << (std::ostream &os, const AForm &form);


#endif