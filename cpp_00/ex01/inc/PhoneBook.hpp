#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

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
			void	printeito(std::string s);
};

#endif
