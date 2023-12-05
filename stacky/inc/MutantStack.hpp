#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <deque>
#include <stack>

class MutantStack
{
 	public:
    		MutantStack();
    		MutantStack(const MutantStack &f);
    		~MutantStack();
    		MutantStack& operator=(const MutantStack &f);
};

#endif
