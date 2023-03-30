#ifndef CONTACT_HPP
# define CONTACT_HPP

class	Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

	public:
		Contact();
		Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
		void	add(Contact *c);
		void	search(Contact *c);
		void	exit();
		void	printeito();
	
};

#endif
