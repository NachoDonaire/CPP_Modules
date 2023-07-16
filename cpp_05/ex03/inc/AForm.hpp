#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		bool			sign;
		const int		g_sgn;
		const int		g_ex;
 	public:
    		AForm();
    		AForm(std::string n, bool sign, int g_sign, int ex);
    		AForm(const AForm &f);
    		virtual ~AForm();
			class	GradeTooHighException : public std::exception{
				public:
					virtual const char * what() const throw() { return "Grade too high"; };
			};
			class	GradeTooLowException : public std::exception{
				public:
					virtual const char * what() const throw() { return "Grade too low"; };
			};
			class	NotSignedException : public std::exception{
				public:
					virtual const char * what() const throw() { return "Not signed"; };
			};
			class FileNotOpen: public std::exception{
				public:
					virtual const char * what() const throw() { return "File couldnt be open"; };
			};

		std::string	getName() const;
		bool		getSign() const;
		int		getGradeSign() const;
		int		getGradeExec() const;
		void		beSigned(Bureaucrat &b);
		virtual void	execute(Bureaucrat const & executor) const = 0;
		void	signIn();
};
std::ostream& operator<<(std::ostream &os, const AForm &t);
#endif
