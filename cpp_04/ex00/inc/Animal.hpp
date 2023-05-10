#ifndef ANIMAL_HPP
#define ANIMAL_HPP


class Animal
{
	protected:
		std::string type;
 	public:
    		Animal();
		Animal(const Animal &a);
    		~Animal();
    		Animal& operator=(const Animal &f);
};

#endif
