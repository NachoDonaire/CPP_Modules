#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <AMateria.hpp>
#include <IMateriaSource.hpp>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materias[4];
 	public:
    		MateriaSource();
    		MateriaSource(const MateriaSource &f);
    		~MateriaSource();
    		MateriaSource& operator=(const MateriaSource &f);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif
