#ifndef ICE_HPP
#define ICE_HPP

#include <AMateria.hpp>

class Ice : public AMateria
{
 	public:
    		Ice();
    		Ice(const Ice &f);
    		~Ice();
    		Ice& operator=(const Ice &f);
};

#endif
