#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <AForm.hpp>
#include <Bureaucrat.hpp>
#include <fstream>

struct	Node{
	int		value;
	Node	*left;
	Node	*right;

	Node(int v) : value(v), left(NULL), right(NULL){}
} ;

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
			void	execute(Bureaucrat const &executor) const;
			void	tree(Node *n, int level, char c)  const;
};

#endif
