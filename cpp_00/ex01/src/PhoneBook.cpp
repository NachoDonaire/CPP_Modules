#include "diary.hpp"

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
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	if (contactpos == 8)
		contactpos = 0;
	std::cout << "Introduce first name: \n";
	std::cin >> first_name;
	if (first_name == "")
		return (error());
	std::cout << "Introduce a second name: \n";
	std::cin >> last_name;
	if (last_name == "")
		return (error());
	std::cout << "Introduce a nickname: \n";
	std::cin >> nickname;
	if (nickname == "")
		return (error());
	std::cout << "Introduce a phone number: \n";
	std::cin >> phone_number;
	if (phone_number == "")
		return (error());
	std::cout << "Introduce the darkest secret of your contact: \n";
	std::cin >> darkest_secret;
	if (darkest_secret == "")
		return (error());

	contacts[contactpos] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
	contactpos++;
}

void	PhoneBook::printeito(std::string s)
{
	if (s.length() > 10)
		std::cout << std::setfill(' ') << std::setw(10) <<  s.replace(10, s.length(), ".") << "|" ;
	else
		std::cout << std::setfill(' ') << std::setw(10) << s << "|";
}


void	PhoneBook::search()
{
	int			index;

	std::cout <<  "Which contact would you like to see? (from 1 to 8)\n";
	std::cin >> index;
	if (index < 1 || index > 8)
	{
		std::cout << "Please, valid index. From 1 to 8." << std::endl;
		return ;
	}
	index--;
	std::cout << std::setfill(' ') <<  std::setw(10) << index  + 1<< "|" ;
	contacts[index].printeito();
	std::cout << std::endl;
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
