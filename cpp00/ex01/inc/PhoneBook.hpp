#include "Contact.hpp"
class	PhoneBook
{
	public :
		int	diary(Contact *c, int i);
		int	loop;
		PhoneBook();
		void	help_msg();
};

PhoneBook::PhoneBook()
{
	loop = 1;
}

void	PhoneBook::help_msg()
{
	std::cout << "-ADD: add a user to the diary" << "\n";
	std::cout << "-SEARCH: look for a contact" << "\n";
	std::cout << "-EXIT: quit the program" << "\n";
}



int	PhoneBook::diary(Contact *c, int i)
{
	(void)c;
	PhoneBook pb;

	std::string input;
	std::cin >> input;
	if (input == "EXIT")
		loop = 0;
	else if (input == "ADD")
	{
		if (i >= 2)
			i = 0;
		c->add(&c[i++]);
	}
	else if  (input == "SEARCH")
		c->search(c);
	else
		pb.help_msg();
	return (i);
}
