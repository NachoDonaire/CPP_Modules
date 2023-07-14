#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <AForm.hpp>
#include <Bureaucrat.hpp>

class PresidentialPardonForm : public AForm
{
	private:
		std::string	target;
 	public:
    		PresidentialPardonForm();
    		PresidentialPardonForm(std::string t);
    		PresidentialPardonForm(const PresidentialPardonForm &f);
    		~PresidentialPardonForm();
    		PresidentialPardonForm& operator=(const PresidentialPardonForm &f);
			void	execute(Bureaucrat const &executor) const;
};

#endif
