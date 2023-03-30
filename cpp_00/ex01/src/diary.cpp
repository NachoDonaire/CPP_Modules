#include <diary.hpp>

int	main(int arg, char **args)
{
	PhoneBook pb;
	std::string tuker;

	if (!arg || !args)
		return (0);

	std::cin >> tuker;
	std::cout << tuker;
	//pb.diary();
	return (0);
}
