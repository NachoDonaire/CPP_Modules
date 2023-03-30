#include <diary.hpp>

Contact::Contact()
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

void	Contact::printeito()
{
	if (first_name.length() > 10)
		std::cout << std::setfill(' ') << std::setw(10) <<  first_name.replace(10, first_name.length(), ".") << "|" ;
	else
		std::cout << std::setfill(' ') << std::setw(10) << first_name << "|";
	if (last_name.length() > 10)
		std::cout << std::setfill(' ') << std::setw(10) <<  last_name.replace(10, last_name.length(), ".") << "|" ;
	else
		std::cout << std::setfill(' ') << std::setw(10) << last_name << "|" ;
	if (nickname.length() > 10)
		std::cout << std::setfill(' ') << std::setw(10) <<  nickname.replace(10, nickname.length(), ".") << "|" ;
	else
		std::cout << std::setfill(' ') << std::setw(10) << nickname << "|";
}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
	first_name = fn;
	last_name = ln;
	nickname = nn;
	phone_number = pn;
	darkest_secret = ds;
}
