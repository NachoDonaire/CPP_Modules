#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string name;
		AMateria* materias[4];
	public:
		Character(std::string const & namecillo);
		Character(Character const & other);
		virtual ~Character();
		
		Character& operator=(Character const & other);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif // CHARACTER_HPP

