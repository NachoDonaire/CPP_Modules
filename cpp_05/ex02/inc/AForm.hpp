#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

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
    		~AForm();
		void		GradeTooHighException();
		void		GradeTooLowException();
		std::string	getName() const;
		bool		getSign() const;
		int		getGradeSign() const;
		int		getGradeExec() const;
		void		beSigned();
};
std::ostream& operator<<(std::ostream &os, const AForm &t);
#endif
