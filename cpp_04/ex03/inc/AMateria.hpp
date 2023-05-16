#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{
	protected:
		std::string	type;

 	public:
    		AMateria();
    		AMateria(const AMateria &f);
    		~AMateria();
    		AMateria& operator=(const AMateria &f);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
