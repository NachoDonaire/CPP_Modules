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
		std::stack<std::string>	off;
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
		int		parser(std::string args);
		void	printStak();
		int		operate();
		void	rotateStak();
		int		isSign(std::string ss);
};

#endif
