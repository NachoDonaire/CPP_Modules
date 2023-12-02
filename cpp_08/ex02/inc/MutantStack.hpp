#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <stack>
#include <iostream>
#include <deque>
#include <vector>

template<typename T, class C = std::deque<T> >
class MutantStack 
{
	protected:
		C	stored;
 	public:
    		MutantStack();
    		MutantStack(MutantStack &f);
    		~MutantStack();
			C	getStored();
			//MutantStack	getThis();
			class	iterator : public std::iterator<std::input_iterator_tag, T, long, const long *, long>{
				private:
					MutantStack	ms;
					C	s;
					T	*i;
					int	tucker;
				public:
				///iterator() {}
				iterator(int wee, MutantStack<T, C> f) : ms(f),  s(f.stored), tucker(wee) {fillT();}
				void	fillT(){i = new T[ms.getStored().size()];for (unsigned long it = 0; it < ms.getStored().size(); it++){i[it] = ms.getStored()[it];}}
				T	operator*() const {return i[tucker];}
				//iterator	operator++() {
				//iterator	&operator++(){stored
					
			};


    		MutantStack& operator=(const MutantStack &f);
			T		top();
			void	push(T a);
			void	pop();
			bool	empty();
			size_t	size();
			MutantStack<T, C>::iterator	begin();
			MutantStack<T, C>::iterator	end();
};


template<typename T, typename C>
MutantStack<T, C>::MutantStack()
{
}

template<typename T, typename C>
MutantStack<T, C>::MutantStack(MutantStack &f)
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
	this->stored = std::move(f.stored);
}

template<typename T, typename C>
typename MutantStack<T, C>::iterator	MutantStack<T, C>::begin()
{
	return iterator(0, *this);
}

template<typename T, typename C>
typename MutantStack<T, C>::iterator	MutantStack<T, C>::end()
{
	std::cout << "saisss: " << stored.size() << std::endl;
	MutantStack<T, C>::iterator	was(stored.size() - 1, *this);
	std::cout << *was << std::endl;
	return was;
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
/*
template<typename T, typename C >
C	MutantStack<T, C>::getThis()
{
	return this;
}
*/
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
