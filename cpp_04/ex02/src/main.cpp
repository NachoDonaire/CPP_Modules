#include "Animal.hpp"
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

void	leaks()
{
	system("leaks Animal");
}

int	main()
{
//const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* k = new Dog();
const Animal* i = new Cat();

//atexit(leaks);

std::cout << "---------------------------------------------" << std::endl;

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
//meta->makeSound();

std::cout << "---------------------------------------------" << std::endl;

delete k;
k = j;
(void)k;

std::cout << "---------------------------------------------" << std::endl;

delete i;
delete j;
//delete meta;
return 0;
}