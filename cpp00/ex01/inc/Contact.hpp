class	Contact
{
	private	:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	
	public	:
		Contact(std::string fn, std::string ln, std::string nn, int pn, std::string dark);
		Contact();
		void	add(Contact *c);
		void	search(Contact *c);
		void	exit(int lap);
};

Contact::Contact()
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

Contact::Contact(std::string fn, std::string ln, std::string nn, int pn, std::string dark)
{
	first_name = fn;
	last_name = ln;
	nickname = nn;
	phone_number = pn;
	darkest_secret = dark;
}

void	Contact::exit(int lap)
{
	lap = 0;
}

void	Contact::add(Contact *c)
{
	std::string	input;

	std::cout << "First name: ";
	std::cin >> input;
	c->first_name = input;
	std::cout << "\n";
	std::cout << "Last name: ";
	std::cin >> input;
	c->last_name = input;
	std::cout << "\n";
	std::cout << "Nickname: ";
	std::cin >> input;
	c->nickname = input;
	std::cout << "\n";
	std::cout << "Phone number: ";
	std::cin >> input;
	c->phone_number = input;
	std::cout << "\n";
	std::cout << "Darkest secret: ";
	std::cin >> input;
	c->darkest_secret = input;
	std::cout << "\n";
}

void	Contact::search(Contact *c)
{
	int	i;

	std::cout << "Wich contact are you looking for? Type a number between 1 and 8: ";
	std::cin >> i;
	if (i < 1  || i > 8)
	{
		std::cout << "Something went wrong";
		return ;
	}
	i--;
	if (c[i].first_name == "")
	{
		std::cout << "Not allocated contact\n";
		return ;
	}
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << i + 1 <<  "|";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << c[i].first_name << "|";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << c[i].last_name << "|";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << c[i].nickname << "\n";
}




