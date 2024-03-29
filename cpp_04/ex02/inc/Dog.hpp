#ifndef DOG_HPP
#define DOG_HPP

#include <Animal.hpp>
#include <Brain.hpp>

class Dog : public Animal
{
	private:
		Brain 	*b;
 	public:
    		Dog();
    		Dog(const Dog &f);
    		~Dog();
    		Dog& operator=(const Dog &f);
		void makeSound() const;
		void	compareBrain(const Dog &a);
		Brain	*getBrain() const;
};

#endif
