#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <stack>
#include <iostream>
#include <deque>
#include <vector>
#include <list>

template<typename T, class C = std::deque<T> >
class MutantStack 
{
	protected:
		C	stored;
 	public:
    		MutantStack();
    		MutantStack(MutantStack<T, C> &f);
    		~MutantStack();
			C	getStored();
			class	iterator { 
				private:
					typename C::iterator	it;
				public:
				iterator(typename C::iterator i) : it(i) {}
				iterator()   {}

				T	&operator*() const {return *it;}
				iterator	&operator++() {it++; return *this;}
				iterator	&operator--() {it--; return *this;}
				iterator	operator++(int) {iterator tmp = *this; ++(*this);return tmp;}
				iterator	operator--(int) {iterator tmp = *this; --(*this);return tmp;}
				bool operator!=(const iterator& other) const {
            return it != other.it;}
				bool operator==(const iterator& other) const {
            return it == other.it;}
					
			};

    		MutantStack& operator=(const MutantStack &f);
			T		top();
			void	push(T a);
			void	pop();
			bool	empty();
			size_t	size();
			typename C::iterator	begin() { return stored.begin() ;};
			typename C::iterator	end() { return stored.end() ;};
			//bool			const operator!=(const MutantStack &f) {if (this->it != f.it){return 0;}return 1;}
};


template<typename T, typename C>
MutantStack<T, C>::MutantStack()
{
}

template<typename T, typename C>
MutantStack<T, C>::MutantStack(MutantStack<T, C> &f)
{
	this->stored = f.stored;
}

template<typename T, typename C>
MutantStack<T, C>::~MutantStack()
{
}

template<typename T, typename C>
MutantStack<T, C> &MutantStack<T, C>::operator=(const MutantStack &f)
{
	this->stored = f.stored;
	this->stored = move(f.stored);
}

template<typename T, typename C >
T	MutantStack<T, C>::top()
{
	return this->stored.front();
}

template<typename T, typename C >
void	MutantStack<T, C>::push(T	a)
{
	this->stored.push_front(a);
}

template<typename T, typename C >
bool	MutantStack<T, C>::empty()
{
	if (this->stored.size() == 0)
		return 1;
	return 0;
}

template<typename T, typename C >
C	MutantStack<T, C>::getStored()
{
	return this->stored;
}

template<typename T, typename C >
size_t	MutantStack<T, C>::size()
{
	return this->stored.size();
}

template<typename T, typename C >
void	MutantStack<T, C>::pop()
{
	this->stored.pop_front();
}
#endif
