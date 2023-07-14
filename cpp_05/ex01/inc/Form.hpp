#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool			sign;
		const int		g_sgn;
		const int		g_ex;
 	public:
    		Form();
    		Form(std::string n, bool sign, int g_sign, int ex);
    		Form(const Form &f);
    		virtual ~Form();
			class	GradeTooHighException : public std::exception{
				public:
					virtual const char * what() const throw() { return "Grade too high"; };
			};
			class	GradeTooLowException : public std::exception{
				public:
					virtual const char * what() const throw() { return "Grade too low"; };
			};
		std::string	getName() const;
		bool		getSign() const;
		int		getGradeSign() const;
		int		getGradeExec() const;
		void		beSigned(Bureaucrat &b);
		void	signIn();
};
std::ostream& operator<<(std::ostream &os, const Form &t);
#endif
