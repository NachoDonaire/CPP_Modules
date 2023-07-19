#include <Array.hpp>

int	main()
{
	Array<int> b(7);

	std::cout << "size : " << b.size() << std::endl;
	b.fillOrder(3);
	try{
	std::cout << b[-1] << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}
