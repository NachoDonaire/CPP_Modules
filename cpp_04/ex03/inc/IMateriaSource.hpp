#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <AMateria.hpp>

class IMateriaSource
{
 	public:
		virtual ~IMateriaSource();
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;

    		IMateriaSource();
    		IMateriaSource(const IMateriaSource &f);
    		IMateriaSource& operator=(const IMateriaSource &f);
};

#endif
