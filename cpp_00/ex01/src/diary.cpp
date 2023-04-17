#include <diary.hpp>

int	main(int arg, char **args)
{
	PhoneBook pb;

	if (!arg || !args)
		return (0);

	pb.diary();
	return (0);
}
