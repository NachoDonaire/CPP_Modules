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
		if (this->parser(std::string(args[i])) == 1)
		{
			std::cout << "Wrong input, check it" << std::endl;
			this->error = 1;
			return ;
		}
		stak.push(std::string(args[i]));
		i++;
	}
	this->rotateStak();
}

RPN::RPN(const RPN &a)
{
	this->stak = a.stak;
	this->error = a.error;
}

RPN::~RPN()
{
}

int	RPN::parser(std::string args)
{
	if (args == "-" || args == "+" || args == "/" || args == "*")
		return (0);
	if (args[0] == '-' && args.length() > 1)
	{
		std::string neg = args.substr(1, args.length() - 1);
		for (size_t i = 0; i < neg.length(); i++)
		{
			if (!isdigit(neg[i]))
				return (1);
		}
		return (0);
	}
	if (args.length() > 1)
		return (1);
	if (isdigit(args[0]))
		return (0);
	return (1);
}


void	RPN::printStak()
{
	while (!this->off.empty())
	{
		std::cout << off.top();
		off.pop();
	}
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

void	RPN::rotateStak()
{
	while (!this->stak.empty())
	{
		off.push(this->stak.top());
		this->stak.pop();
	}
}

int	RPN::isSign(std::string ss)
{
	if (ss == "*" || ss == "+" || ss == "-" || ss == "/")
		return 1;
	return 0;
}


int	RPN::operate(int a)
{
	int result  = a;
	if (this->isSign(this->off.top()))
	{
		std::string	s = this->off.top();
		if (s == "*")
		{
			while (!this->stak.empty())
			{
				result *= atoi(this->stak.top());
				this->stak.pop();
			}
		}
		else if (s == "-")
		{
			while (!this->stak.empty())
			{
				result -= atoi(this->stak.top());
				this->stak.pop();
			}
		}
		else if (s == "/")
		{
			while (!this->stak.empty())
			{
				result /= atoi(this->stak.top());
				this->stak.pop();
			}
		}
		else if (s == "+")
		{
			while (!this->stak.empty())
			{
				result += atoi(this->stak.top());
				this->stak.pop();
			}
		}
		std::strinstream	see;
		see << result;
		off.push(see.str());
	}
		



	if (!this->off.empty())
	{
		this->stak.push(off.top());
		this->off.pop();
		this->operate(
	}
}

int	RPN::result()
{
	if (this->error == 1)
	{
		std::cout  << "An error ocurred" << std::endl;
		return -1;
	}
	return (0);
}

