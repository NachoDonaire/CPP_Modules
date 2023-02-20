class	Contact
{
	private	:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		int			phone_number;
		std::string	darkest_secret;
	
	public	:
		Contact(std::string fn, std::string ln, std::string nn, int pn, std::string dark);
		Contact();
		void	add();
		void	search();
		void	exit(int lap);
};

Contact::Contact()
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = 0;
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
