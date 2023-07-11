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
		void		GradeTooHighException() const;
		void		GradeTooLowException() const;
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
