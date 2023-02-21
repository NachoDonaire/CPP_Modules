#include "diary.hpp"
//#include "Contact.hpp"
//#include "PhoneBook.hpp"

int	main(int arg, char **args)
{
	PhoneBook 	pb;
	Contact		c[8];
	int			i;

	i = 0;
	while (i < 8)
		c[i++] = Contact("", "", "", 0, "");
	(void)arg;
	(void)args;
	i = 0;
	while (pb.loop == 1)
		i = pb.diary(c, i);
	return (0);
}
