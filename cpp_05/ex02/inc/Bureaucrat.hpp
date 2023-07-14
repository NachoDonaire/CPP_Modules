#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <AForm.hpp>

class Bureaucrat
{
	private:
		const std::string		name;
		int			grade;
 	public:
    		Bureaucrat();
		Bureaucrat(std::string n, int g);
    		Bureaucrat(const Bureaucrat &f);
    		~Bureaucrat();
			class	GradeTooHighException : public std::exception{
				public:
					virtual const char * what() const throw() { return "Grade too high"; };
			};
			class	GradeTooLowException : public std::exception{
				public:
					virtual const char * what() const throw() { return "Grade too low"; };
			};
		std::string	getName() const;
		int		getGrade() const;
		void		upGrade(int d);
		void		downGrade(int d);
		void	signAForm(AForm &f);
		void	executeAForm(AForm const &form) const;
};
std::ostream& operator<<(std::ostream &os, const Bureaucrat &b);
#endif
