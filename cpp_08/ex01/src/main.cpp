#include <Span.hpp>

int	main()
{
	Span<std::vector<int> >	wilkinson(23);

	wilkinson.randomFill();
	std::cout << "Printing wilkinson....." << std::endl;
	wilkinson.printSpan();
	/*
	std::vector<int>	zuko;
	std::vector<int>::iterator	i;
	time_t						t;

	srand((unsigned) time(&t));
	for (int i = 0; i < 10 ; i++)
		zuko.push_back(rand() % 100);
	for (i = zuko.begin() ; i != zuko.end(); i++)
		std::cout << "Value: " << *i << std::endl;
		*/
	return (0);
}
