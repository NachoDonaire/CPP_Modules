#include "Animal.hpp"
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>


int	main()
{
	const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << "---------------------------------------------" << std::endl;

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

std::cout << "---------------------------------------------" << std::endl;
std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;

Dog proof;
Dog tmp = proof;
const Animal *pruebote = new Cat();
const Animal *tucker = pruebote;
 pruebote->makeSound();
proof.makeSound();
tucker->makeSound();

std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;

    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

std::cout << "---------------------------------------------" << std::endl;
delete i;
delete j;
delete meta;
return 0;
}
