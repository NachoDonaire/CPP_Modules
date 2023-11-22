#include <Array.hpp>

void	printArray(Array <int>a)
{
	std::cout << "Printing array of lenght : " << a.size() << std::endl;
	for (int i = 0; i < 7; i++)
	{
		std::cout << "Value : " << a[i] << " Tucker : " << a.size() <<  std::endl;
	}
}



int	main()
{
	Array<int> b(7);

	std::cout << "size : " << b.size() << std::endl;
	b.fillOrder(3);
	Array<int> c(b);
	Array<int> d(b);
	std::cout << "Pre modification : " << std::endl;
	printArray(b);
	printArray(c);
	printArray(d);

	c.fillOrder(1);
	d.fillOrder(9);
	std::cout << "Modification on c and d done: " << std::endl;
	printArray(b);
	printArray(c);
	printArray(d);







	try{
	std::cout << b[1] << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}
