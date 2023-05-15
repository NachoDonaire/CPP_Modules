#ifndef DOG_HPP
#define DOG_HPP

#include <Animal.hpp>
#include <Brain.hpp>

class Dog : public Animal
{
	private:
		Brain 	*b;
 	public:
		void Pure_Method();
    		Dog();
    		Dog(const Dog &f);
    		~Dog();
    		Dog& operator=(const Dog &f);
		void makeSound() const;
};

#endif
