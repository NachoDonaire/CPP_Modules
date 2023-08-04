#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <sstream>

struct	Data{
	int	i;
	Data(int n) : i(n) {}
};

class Serializer
{
	private:
    		Serializer();
 	public:
    		Serializer(const Serializer &f);
    		~Serializer();
    		Serializer& operator=(const Serializer &f);
			static uintptr_t	serialize(Data *ptr);
			static Data		*deserialize(uintptr_t raw);
};

#endif
