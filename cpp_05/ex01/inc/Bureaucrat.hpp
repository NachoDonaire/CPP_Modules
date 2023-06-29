#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
		void		GradeTooHighException();
		void		GradeTooLowException();
		std::string	getName() const;
		int		getGrade() const;
		void		upGrade(int d);
		void		downGrade(int d);
};
std::ostream& operator<<(std::ostream &os, const Bureaucrat &b);
#endif