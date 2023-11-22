#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define THE_LIMIT 100

template<typename T>
class Span
{
	private:
		unsigned int	N;
		T				stored;
 	public:
    		Span();
			Span(unsigned int n);
    		Span(const Span &f);
			void	addNumber(int a);
			void	randomFill();
			void	printSpan();
    		~Span();
    		Span& operator=(const Span &f);
};

#endif
