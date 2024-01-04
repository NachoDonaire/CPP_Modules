#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
	private:
		std::stack<int>	stak;
		int		sol;
		int		error;
 	public:
    		RPN();
    		void	result();
    		RPN(char **args);
    		RPN(const RPN &f);
    		~RPN();
    		RPN& operator=(const RPN &f);
};

#endif
