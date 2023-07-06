#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP


class ShrubberyCreationForm : public AForm
{
	private:
		std::string	target;
 	public:
    		ShrubberyCreationForm();
    		ShrubberyCreationForm(std::string t);
    		ShrubberyCreationForm(const ShrubberyCreationForm &f);
    		~ShrubberyCreationForm();
    		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &f);
			void	execute(Bureaucrat const & executor) const;
};

#endif
