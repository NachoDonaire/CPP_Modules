#include <RPN.hpp>

RPN::RPN()
{
}

RPN::RPN(char **args)
{
	std::string	s(args[1]);
	this->error = 0;
	for (long unsigned int c = 0; c < s.length(); c++)
	{
		if (isdigit(s[c]))
			this->stak.push(s[c] - 48);
		else if ((s[c] == '+' || s[c] == '*' || s[c] == '/' || s[c] == '-') && stak.size() >= 2)
		{
			int	o1 = stak.top();
			stak.pop();
			int	o2 = stak.top();
			stak.pop();
			if (s[c] == '+') {stak.push(o1 + o2);}
			else if (s[c] == '*') {stak.push(o1 * o2);}
			else if (s[c] == '-') {stak.push(o2 - o1);}
			else if (s[c] == '/') {stak.push(o2 / o1);}
			std::cout << "EE"<< stak.top()  << std::endl;
		}
		else if (s[c] == ' ')
			continue ;
		else
		{
			this->error = 1;
			std::cout << "Something went wrong" << std::endl;
			return ;
		}
	}
	this->sol = stak.top();
}

RPN::RPN(const RPN &a)
{
	this->stak = a.stak;
	this->sol  =a.sol;
	this->error  =a.error;
}

RPN::~RPN()
{
}

RPN &RPN::operator=(const RPN &f)
{
        if (this != &f)
        {
		this->stak = f.stak;
		this->sol = f.sol ;
        }
        return *this;
}
void	RPN::result()
{
	if (this->error == 1)
	{
		std::cout << "Cannot calculate, something went wrong" << std::endl;
		return ;
	}
	std::cout << "RESULT : " << this->sol << std::endl;
}
