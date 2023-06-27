#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main()
{
	AMateria	*i = new Ice();	
	AMateria	*c = new Cure();	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(i);
	src->learnMateria(c);

Character* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
delete tmp;
std::cout << "alakazam" << std::endl;
me->equip(tmp);
std::cout << "alakazam" << std::endl;
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;

	return (0);
}
