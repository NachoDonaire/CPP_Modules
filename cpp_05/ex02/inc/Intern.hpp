#ifndef INTERN_HPP
#define INTERN_HPP

#include <AForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>

class Intern
{
 	public:
    		Intern();
    		Intern(const Intern &f);
    		~Intern();
    		Intern& operator=(const Intern &f);
			AForm	*makeForm(std::string form, std::string target);
			class	NoExistingFormException : public std::exception{
				public:
					virtual const char * what() const throw() { return "No existing form"; };
			};
};

#endif
