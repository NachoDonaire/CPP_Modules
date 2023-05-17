#ifndef CURE_HPP
#define CURE_HPP

#include <AMateria.hpp>

class Cure : public AMateria
{
 	public:
    		Cure();
    		Cure(const Cure &f);
    		~Cure();
    		Cure& operator=(const Cure &f);
		virtual AMateria	*clone() const;
		virtual void	use(ICharacter &target);
		//std::string const & getType() const;
};

#endif
