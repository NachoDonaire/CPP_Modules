#include <ex02lib.hpp>

int	main()
{
	Base	*a = generate();
	identify(a);
	identify_ref(*a);
	delete	a;
	return (0);
}
