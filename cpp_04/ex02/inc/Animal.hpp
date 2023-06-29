#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "iostream"

class Animal
{
	protected:
		std::string type;
 	public:
		virtual void Pure_Method() = 0;
    		Animal();
		Animal(const Animal &a);
    		virtual ~Animal();
    		Animal& operator=(const Animal &f);
		virtual void 		makeSound() const;
		std::string 	getType() const;
};

#endif