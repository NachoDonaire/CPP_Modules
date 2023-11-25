#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		size_t	n;
		T		*t;
 	public:
    		Array();
    		Array(int n);
    		Array(const Array &f);
    		~Array();
    		Array& operator=(const Array &f);
			void	fillOrder(size_t n);
			T& operator[](int index);
			class	OutOfRangeException : public std::exception{
				virtual const char * what() const throw() { return "Index out of range "; }
			};
			int		size() const;
};


template<typename T>
Array<T>::Array()
{
	std::cout << "Array constructor" << std::endl;
	this->t = NULL;
	this->n = 0;
}

template<typename T>
Array<T>::Array(int n)
{
	this->n = n;
	this->t = new T[n];
	for (int i = 0; i < n; i++)
		this->t[i] = 0;
}

template<typename T>
Array<T>::Array(const Array &a) : n(a.n)
{
	this->t = new T[n];
	for (int i = 0; i < this->size(); i++)
		this->t[i] = a.t[i];

}

template<typename T>
Array<T>::~Array()
{
	if (this->t)
		delete this->t;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &f)
{
        if (this != &f)
        {
			if (this->t)
				delete this->t;
			this->t = f.t;
			this->n = f.n;
        }
        return *this;
}

template<typename T>
int	Array<T>::size() const
{
	return this->n;
}

template<typename T>
T	&Array<T>::operator[](int index)
{
	if (index < 0 || index >= this->size()) 
	{
		std::cout << "index : " << index << std::endl;
		throw Array::OutOfRangeException();
	}
	return (this->t[index]);
}

template <typename T >
void	Array<T>::fillOrder(size_t n)
{
	int	u;

	u = n;
	for (size_t i = 0; i < this->n; i++)
		this->t[i] = u++;
}

#endif
