#include <Brain.hpp>

Brain::Brain()
{
        std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &a)
{
	(void)a;
}

Brain::~Brain()
{
        std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &f)
{
        if (this != &f)
        {
		return *this;
        }
        return *this;
}
