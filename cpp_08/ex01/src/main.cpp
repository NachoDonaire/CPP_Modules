#include <Span.hpp>

int	main()
{
	Span<std::vector<int> >	wilkinson(5);

	wilkinson.addNumber(23);
	wilkinson.addNumber(22);
	wilkinson.randomFill();
	std::cout << "Shortest Span : " << wilkinson.shortestSpan() << std::endl;
	std::cout << "Printing wilkinson....." << std::endl;
	wilkinson.addNumber(23);
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
