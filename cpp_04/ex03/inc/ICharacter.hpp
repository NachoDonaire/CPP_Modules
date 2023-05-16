#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <Ice.hpp>
#include <Cure.hpp>

class ICharacter
{
	private:
		std::string	name;
		AMateria	*materia;
 	public:
    		ICharacter(std::string name);
    		ICharacter(const ICharacter &f);
    		~ICharacter();
    		ICharacter& operator=(const ICharacter &f);
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif
