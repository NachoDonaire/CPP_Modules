#ifndef CAT_HPP
#define CAT_HPP

#include <Animal.hpp>

class Cat : public Animal
{
 	public:
    		Cat();
    		Cat(const Cat &f);
    		~Cat();
    		Cat& operator=(const Cat &f);
		void makeSound() const;
};

#endif
