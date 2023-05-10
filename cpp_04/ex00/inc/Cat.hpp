#ifndef CAT_HPP
#define CAT_HPP


class Cat
{
 	public:
    		Cat();
    		Cat(const Cat &f);
    		~Cat();
    		Cat& operator=(const Cat &f);
};

#endif
