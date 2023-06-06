#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void	leaks()
{
	system("leaks  materia");
}

int	main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

Character* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
std::cout << "alakazam" << std::endl;
me->equip(tmp);
delete tmp;
std::cout << "alakazam" << std::endl;
tmp = src->createMateria("cure");
me->equip(tmp);
delete tmp;
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);

std::cout << "------------------" << std::endl;

delete bob;
delete me;
delete src;

	return (0);
}
