#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <Bureaucrat.hpp>
#include <AForm.hpp>

class RobotomyRequestForm : public AForm
{
 	public:
    		RobotomyRequestForm();
    		RobotomyRequestForm(const RobotomyRequestForm &f);
    		~RobotomyRequestForm();
    		RobotomyRequestForm& operator=(const RobotomyRequestForm &f);
			void	execute(Bureaucrat const & executor) const;
			void	PureMethod();
};

#endif
