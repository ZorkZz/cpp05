#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>
#include <string>
#include <cstring>

class	Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const int grade);
		Bureaucrat(const std::string name);
		Bureaucrat(Bureaucrat &bureaucrat);
		Bureaucrat(const std::string name, const int grade);
		Bureaucrat &operator=(const Bureaucrat &bureaucrat);
		Bureaucrat &operator++();
		Bureaucrat &operator--();
		std::string	get_name() const;
		void	signForm(Form &form);
		void	executeForm(Form	&form);
		int	get_grade() const;
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
		class NotSigned : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		const   std::string _name;
		int _grade;
};

std::ostream	&operator << (std::ostream &os, const Bureaucrat &bureaucrat);

#endif