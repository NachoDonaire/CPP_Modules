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
	//atexit(leaks);
	const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* catty = new WrongCat();
const WrongAnimal* pesto = new WrongAnimal();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
catty->makeSound();
pesto->makeSound();
delete i;
delete j;
delete meta;
delete catty;
delete pesto;
return 0;
}
