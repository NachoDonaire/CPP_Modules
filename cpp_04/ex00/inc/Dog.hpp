#ifndef DOG_HPP
#define DOG_HPP


class Dog : public Animal
{
 	public:
    		Dog();
    		Dog(const Dog &f);
    		~Dog();
    		Dog& operator=(const Dog &f);
};

#endif
