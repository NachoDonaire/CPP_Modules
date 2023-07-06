#include <Brain.hpp>

Brain::Brain()
{
        std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &a)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = a.ideas[i];
}

Brain::~Brain()
{
        std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &f)
{
        if (this == &f)
        {
		return *this;
        }
	for (int i = 0; i < 100; i++)
		this->ideas[i] = f.ideas[i];
	return *this;
}
