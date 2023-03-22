#include "diary.hpp"

class	Contact
{
			
	public:
		Contact();
		Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
		void	add(Contact *c);
		void	search(Contact *c);
		void	exit();
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

};

Contact::Contact()
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
	first_name = fn;
	last_name = ln;
	nickname = nn;
	phone_number = pn;
	darkest_secret = ds;
}


