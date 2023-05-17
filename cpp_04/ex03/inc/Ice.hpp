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
		virtual AMateria	*clone() const;
		virtual void	use(ICharacter &target);
		//std::string const &getType() const;


};

#endif
