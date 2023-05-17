#include <Character.hpp>

Character::Character(std::string const &namecillo)
{
	this->name = namecillo;
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

Character::Character(Character const &other) : ICharacter(other)
{
	this->name = other.name;
	for (int i = 0; i < 4; i++)
	{
		if (other.materias[i])
			materias[i] = other.materias[i]->clone();
		else
			materias[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete materias[i];
}

Character	&Character::operator=(const Character& other)
{
	if (this != &other)
	{
		name = other.name;
		for (int i = 0; i < 4; i++)
		{
			delete materias[i];
			if (other.materias[i])
				materias[i] = other.materias[i]->clone();
			else
				materias[i] = NULL;
		}
	}
	return *this;
}

std::string const &Character::getName() const
{
	return this->name;
}

void	Character::equip(AMateria *m)
{
	int	i;

	i = 0;
	if (m == NULL)
	{
		std::cout << "recibe nulo" << std::endl;
		return ;
	}
	while (this->materias[i])
		i++;
	if (i == 4)
	{
		std::cout << "aaa" << std::endl;
		return ;
	}
	std::cout<< "jimmy" << std::endl;
	materias[i] = m->clone();
	std::cout <<"jazz" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		materias[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3 && materias[idx])
	{
		std::cout << "hola?" << std::endl;
		materias[idx]->use(target);
	}
}

