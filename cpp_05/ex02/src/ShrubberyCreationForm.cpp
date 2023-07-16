#include <ShrubberyCreationForm.hpp>
#include <fstream>
#include  <random>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm()
{
        std::cout << "ShrubberyCreationForm constructor called" << std::endl;
        this->target = "Default target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string t) : AForm()
{
	std::cout << "Robotomy parameter constructor called" << std::endl;
	this->target = t;
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a)
{
        this->target = a.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
        std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &f)
{
        if (this != &f)
        {
                this->target = f.target;
        }
        return *this;
}


void	ShrubberyCreationForm::treeMaker(Node *tree, int ind, char c, std::ofstream &file) const
{
	if (tree == NULL)
		return ;
	this->treeMaker(tree->right, ind + 4, c, file);
	for (int i = 0; i < ind; i++){
		file << ' ';
	}
	file << c << tree->data << std::endl;
	this->treeMaker(tree->left, ind + 4, c, file);
}


void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Node *tree = new Node(97);
	tree->right = new Node(134);
	tree->left = new Node(23);
	tree->right->right = new Node(119);
	tree->left->right = new Node(117);
	tree->right->left = new Node(202);
	tree->left->left = new Node(64);
	
	if (this->getSign() == 0)
		throw AForm::NotSignedException();
	if (executor.getGrade() > 137)
		throw AForm::GradeTooLowException();
	std::ofstream file(this->target + "_shrubbery", std::ofstream::out | std::ofstream::trunc);
	if (file.is_open())
	{	
		this->treeMaker(tree, 0, '-', file);

	}
	else
		throw AForm::FileNotOpen();
}
