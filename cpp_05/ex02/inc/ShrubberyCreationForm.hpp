#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <AForm.hpp>
#include <Bureaucrat.hpp>
#include <fstream>

struct Node{
	char		data;
	Node 	*right;
	Node	*left;
	Node(int value) : data(value), right(NULL), left(NULL) {}
};

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
			void	treeMaker(Node *tree, int ind, char c, std::ofstream &file) const;
};

#endif
