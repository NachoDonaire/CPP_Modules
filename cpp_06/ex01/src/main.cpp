#include <Serializer.hpp>

int	main()
{	
	Data		ptr(7);
	Serializer	s;
	uintptr_t	raw;

	ptr.i = 7;
	raw = 0;
	raw = s.serialize(&ptr);
	std::cout << "Previous uintptr_t address : " << &raw << std::endl;
	std::cout << "-------------------" << std::endl;
	std::cout << "Success conversion : " << std::endl;
	std::cout << "uintptr_t address : " << &raw << std::endl;
	std::cout << "Data address : " << &ptr << std::endl;
	std::cout << "-------------------" << std::endl;
	std::cout << "Reconversion" << std::endl;

	Data	*tucker = (s.deserialize(raw));

	std::cout << "neo Data value " << tucker->i << std::endl;




	return (0);
}
