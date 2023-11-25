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
class Span {
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
			int		shortestSpan();
			unsigned int	currentSize();
    		~Span();
    		Span& operator=(const Span &f);
};


template<typename T>
Span<T>::Span()
{
	this->N = 0;
}

template<typename T>
unsigned int	Span<T>::currentSize()
{
	unsigned int	z;

	z = 0;
	for (typename T::iterator i = stored.begin(); i != stored.end(); i++)
		z++;
	return (z);
}

template<typename T>
Span<T>::Span(unsigned int n) : N(n)
{
}

template<typename T>
void	Span<T>::addNumber(int a)
{
	typename T::iterator	i;
	unsigned int			n;

	n = 0;
	for (i = stored.begin(); i != stored.end(); i++)
		n++;
	if (n >= N)
		return ;
	stored.push_back(a);
}

template<typename T>
void	Span<T>::randomFill()
{
	typename T::iterator	i;
	time_t				t;
	unsigned int					wee;

	srand((unsigned) time(&t));

	wee = 0;
	i = stored.begin();
	while (i != stored.end())
	{
		wee++;
		i++;
	}
	while (wee < N)
	{
		stored.push_back(rand() % THE_LIMIT);
		wee++;
	}
}

/*
template<typename T>
int	Span<T>::shortestSpan()
{
	T	a;
	typename	T::iterator	minValue;
	typename	T::iterator	penValue;
	a = this->stored;

	minValue = std::min_element(stored.begin(), stored.end());
	for (unsigned int i = 0; i < this->currentSize(); i++)
	{
		std::cout << "Value : " << a.at(i) << " ";
		if (a.at(i) == *minValue)
		{
			a.at(i) = *std::max_element(stored.begin(), stored.end());
			std::cout << a.at(i) << std::endl;
		}

	}
	penValue = std::min_element(a.begin(), a.end());
	std::cout  << std::endl;
	std::cout << "----------" << std::endl;
	std::cout << "penValue : " << *penValue << std::endl;
	std::cout << "minValue : " << *minValue << std::endl;
	return (*penValue - *minValue);
}
*/

template<typename T>
int	Span<T>::shortestSpan()
{

}

template<typename T>
void	Span<T>::printSpan()
{
	typename T::iterator	i;
	for (i = stored.begin() ; i < stored.end(); i++)
		std::cout << *i << std::endl;
}

template<typename T>
Span<T>::Span(const Span &a)
{
	this->N = a.N;
	this->stored = a.stored;
}

template<typename T>
Span<T>::~Span()
{
}

template<typename T>
Span<T> &Span<T>::operator=(const Span &f)
{
        if (this != &f)
        {
        }
        return *this;
}

#endif
