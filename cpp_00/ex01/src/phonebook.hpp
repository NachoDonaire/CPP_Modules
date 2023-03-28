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
			void	error();
			void	exit();
};

PhoneBook::PhoneBook()
{
	advise = 1;
	contactpos = 0;
}

void	PhoneBook::error()
{
	std::cout << "Fill the field please" << std::endl;
	return ;
}

void	PhoneBook::add()
{
	std::string	inserted;

	if (contactpos == 2)
		contactpos = 0;
	std::cout << "Introduce first name: \n";
	std::cin >> inserted;
	if (inserted == "")
		return (error());
	contacts[contactpos].first_name = inserted;
	std::cout << "Introduce a second name: \n";
	std::cin >> inserted;
	if (inserted == "")
		return (error());
	contacts[contactpos].last_name = inserted;
	std::cout <<  "Introduce a nickname: \n";
	std::cin >> inserted;
	if (inserted == "") 
		return (error());
	contacts[contactpos].nickname = inserted;
	std::cout <<  "Introduce a phone number: \n";
	std::cin >> inserted;
	if (inserted == "")
		return (error());
	contacts[contactpos].phone_number = inserted;
	std::cout <<  "Introduce contacts darkest secret: \n";
	std::cin >> inserted;
	if (inserted == "")
		return (error());
	contacts[contactpos].darkest_secret = inserted;
	contactpos++;
}

void	PhoneBook::search()
{
	int	index;

	std::cout <<  "Which contact would you like to see? (from 1 to 8)\n"; 
	std::cin >> index;
	if (index < 1 || index > 8)
	{
		std::cout << "Please, valid index. From 1 to 8." << std::endl;
		return ;
	}
	index--;
	std::cout << std::setw(20) << index  + 1<< "|"  << std::setw(10) << "|" << contacts[index].first_name << std::setw(10) << "|" << contacts[index].last_name << std::setw(10) << "|" <<  contacts[index].nickname <<  std::endl;
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
		if (advise == 1)
			std::cin >> command;
	}
}
