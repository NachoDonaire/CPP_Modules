#include <MateriaSource.hpp>

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &a) : IMateriaSource(a)
{
	for (int i = 0; i < 4; i++)
	{
		if (a.materias[i])
			this->materias[i] = a.materias[i];
		else
			this->materias[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete materias[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &f)
{
        if (this != &f)
        {
		for (int i = 0; i < 4; i++)
		{
			delete materias[i];
			if (f.materias[i])
				materias[i] = f.materias[i]->clone();
			else
				materias[i] = NULL;
		}
        }
        return *this;
}

void	MateriaSource::learnMateria(AMateria *m)
{
	int	i;

	i = 0;
	while (this->materias[i])
		i++;
	if (i >= 4)
		return ;
	std::cout << "el numero i = " << i << std::endl;
	this->materias[i] = m->clone();
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] && materias[i]->getType() == type)
			return materias[i]->clone();
	}
	std::cout << "llega aqui" << std::endl;
	return NULL;
}
