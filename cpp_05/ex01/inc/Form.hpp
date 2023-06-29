#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

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
    		~Form();
		void		GradeTooHighException();
		void		GradeTooLowException();
		std::string	getName() const;
		bool		getSign() const;
		int		getGradeSign() const;
		int		getGradeExec() const;
		void		beSigned();
};
std::ostream& operator<<(std::ostream &os, const Form &t);
#endif
