#include <Span.hpp>

Span::Span()
{
	this->N = 0;
	stored<std::vector>
}

Span::Span(unsigned int n) : N(n)
{
	stored<std::vector>
}

void	Span::addNumber(int a);
{
	T.push_back(a);
}

void	Span::randomFill()
{
	T<int>::iterator	i;
	time_t				t;
	int					wee;

	srand((unsigned) time(&t));

	wee = 0;
	i = T.begin();
	while (i < T.end())
		wee++;
	while (wee < N)
		T.push_back(rand() % THE_LIMIT);
}

void	Span::printSpan()
{
	T<int>::iterator	i;
	for (i = T.begin() ; i < T.end(); i++)
		std::cout << *i;
}

Span::Span(const Span &a)
{
}

Span::~Span()
{
}

Span Span::operator=(const Span &f)
{
        if (this != &f)
        {
        }
        return *this;
}
