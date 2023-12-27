#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <stdlib.h>
#include <sstream>

enum	operators{
	DOT,
	SUM,
	MIN,
	DIV
};

class RPN
{
	private:
		std::stack<std::string>	stak;
		int		error;
		int		signs;
 	public:
    		RPN();
    		RPN(char **args);
    		RPN(const RPN &f);
    		~RPN();
    		RPN& operator=(const RPN &f);
		int		result();
		int		parseSigns(char *s);
		int		operate(std::stack<int> stored, std::string oper);
};

#endif
