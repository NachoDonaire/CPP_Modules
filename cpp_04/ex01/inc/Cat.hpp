#ifndef CAT_HPP
#define CAT_HPP

#include <Animal.hpp>
#include <Brain.hpp>

class Cat : public Animal
{
	private: 
		Brain *b;
 	public:
    		Cat();
    		Cat(const Cat &f);
    		~Cat();
    		Cat& operator=(const Cat &f);
		void makeSound() const;
};

#endif
