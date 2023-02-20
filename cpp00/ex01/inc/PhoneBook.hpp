#include "Contact.hpp"
class	PhoneBook
{
	public :
		void	diary(Contact *c);
		int	loop;
		PhoneBook();
};

PhoneBook::PhoneBook()
{
	loop = 1;
}

void	PhoneBook::diary(Contact *c)
{
	(void)c;
	std::string input;
	std::cin >> input;
	if (input == "EXIT")
		loop = 0;
	else
		std::cout << "Get out by typing 'EXIT'\n";
}
