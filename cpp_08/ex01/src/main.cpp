#include <Span.hpp>

int	main()
{
	{
	Span<std::vector<int> >	wilkinson(10000);

	wilkinson.addNumber(-23);
	wilkinson.addNumber(-22);
	wilkinson.randomFill();
	std::cout << "Shortest Span : " << wilkinson.shortestSpan() << std::endl;
	std::cout << "Longest Span : " << wilkinson.longestSpan() << std::endl;
	std::cout << "Min element : " << wilkinson.minElement() << std::endl;
	std::cout << "Max element : " << wilkinson.maxElement() << std::endl;
	}

	{
		Span<std::vector<int> >	edredon(5);
		try {
			std::cout << "Shortest Span : " << edredon.shortestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << "Longest Span : " << edredon.longestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		edredon.randomFill();
		try {
			edredon.addNumber(42);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	{
Span<std::deque<int> > sp = Span<std::deque<int> >(6);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << "last shorter: " << sp.shortestSpan() << std::endl;
std::cout << "last larger: " << sp.longestSpan() << std::endl;
	}
	//std::cout << "Printing wilkinson....." << std::endl;
	//wilkinson.addNumber(23);
	//wilkinson.printSpan();
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
