#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <cstring>

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

	private:
		const   std::string _name;
		int		_grade;
};

std::ostream	&operator << (std::ostream &os, const Bureaucrat &bureaucrat);

#endif