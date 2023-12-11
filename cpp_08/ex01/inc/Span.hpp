#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <deque>
#include <algorithm>
#include <list>

#define THE_LIMIT 10000

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
			int		longestSpan();
			int		maxElement();
			int		minElement();
			class	FullSpanException : public std::exception{
				virtual const char * what() const throw() { return "Span is full"; }
			};
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
		if (n > this->N)
			throw Span::FullSpanException();
		std::cout << a << std::endl;
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

template<typename T>
int	Span<T>::longestSpan()
{
	T	a;
	typename	T::iterator	minValue;
	typename	T::iterator	maxValue;
	a = this->stored;

	if (this->N == 0 || this->N == 1 || this->stored.size() == 0)
		throw Span::FullSpanException();
	minValue = std::min_element(stored.begin(), stored.end());
	maxValue = std::max_element(stored.begin(), stored.end());
	return (*maxValue - *minValue);
}

template<typename T>
int	Span<T>::shortestSpan()
{
	T	a;
	int	diff;
	int	rtrn;

	if (this->N == 0 || this->N == 1 || this->stored.size() == 0)
	{
		std::cout << "aaaaaa";
		throw Span::FullSpanException();
	}	
	a = this->stored;
	std::sort(a.begin(), a.end());
	rtrn = *(a.begin() + 1) - *a.begin();
	for (typename T::iterator i = a.begin() + 2; i != a.end(); i++)
	{
		diff = *i - *(i - 1);
		if (diff < rtrn)
			rtrn = diff;
	}
	return rtrn;
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
		this->N = f.N;
		this->stored = f.stored;
        }
        return *this;
}

template<typename T>
int	Span<T>::minElement()
{
	return *(std::min_element(this->stored.begin(), this->stored.end()));
}

template<typename T>
int	Span<T>::maxElement()
{
	return *(std::max_element(this->stored.begin(), this->stored.end()));
}
#endif
