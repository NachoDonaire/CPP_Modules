#include <RPN.hpp>

RPN::RPN()
{
	this->error = 0;
}

RPN::RPN(char **args)
{
	this->error = 0;
	this->signs = 0;
	int	i;

	i = 1;
	while (args[i])
	{
		
		if (this->parseSigns(args[i]) == 1)
		{
			std::cout << "An error has occurred, beware of your input" << std::endl;
			this->error = 1;
			std::cout << this->signs << std::endl;
			return ;
		}
		stak.push(std::string(args[i]));
		i++;
	}
}

RPN::RPN(const RPN &a)
{
	this->stak = a.stak;
	this->error = error;
}

RPN::~RPN()
{
}

int	RPN::parseSigns(char *s)
{
	std::string	ss(s);
	if (ss == "*" || ss == "+" || ss == "-" || ss == "/")
	{
		std::cout << "adioooos" << std::endl;
		this->signs++;
		return 0;
	}
	int	i = 0;
	while (ss[i])
	{
		if (!std::isdigit(ss[i]))
			return 1;
		i++;
	}
	return 0;
}

RPN &RPN::operator=(const RPN &f)
{
        if (this != &f)
        {
		this->stak = f.stak;
		this->error = f.error;
        }
        return *this;
}

int	RPN::operate(std::stack<int> stored, std::string oper)
{

}

int	RPN::result()
{

}

