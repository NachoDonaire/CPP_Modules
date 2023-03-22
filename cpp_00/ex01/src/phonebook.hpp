#include "contact.hpp"

class	PhoneBook
{
	private:
			Contact	contacts[8];
			int		advise;
			int		contactpos;
	public:
			PhoneBook();
			void	diary();
			void	add();
			void	search();
			void	exit();
};

PhoneBook::PhoneBook()
{
	advise = 1;
	contactpos = 0;
}

void	PhoneBook::add()
{
	std::string	inserted;

	std::cout << "Introduce first name: \n";
	std::cin >> inserted;
	contacts[contactpos].first_name = inserted;
	std::cout << "Introduce a second name: \n";
	std::cin >> inserted;
	contacts[contactpos].last_name = inserted;
	std::cout <<  "Introduce a phone number: \n";
	std::cin >> inserted;
	contacts[contactpos].phone_number = inserted;
	std::cout <<  "Introduce contacts darkest secret: \n";
	std::cin >> inserted;
	contacts[contactpos].darkest_secret = inserted;
}

void	PhoneBook::search()
{
	int	index;

	std::cout <<  "Which contact would you like to see? (from 1 to 8)\n"; 
	std::cin >> index;
	std::cout << contacts[index].first_name;
	std::cout << std::setw(20) << contacts[index - 1].first_name << "|" << std::endl;
}

void	PhoneBook::exit()
{
	advise = 0;
}


void	PhoneBook::diary()
{
	std::string	command;

	std::cout << "Please, insert one of the following commands:\n ADD: add a new contact\n SEARCH: seek an existing contact\n EXIT: finish program.\n";
	std::cin >> command;
	while (advise == 1)
	{
		if (command == "ADD")
			add();
		else if (command == "SEARCH")
			search();
		else if (command == "EXIT")
			exit();
		else
			std::cout << "Please, valid command\n";
		std::cin >> command;
	}
}
