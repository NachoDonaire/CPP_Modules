#include <algorithm>
#include <vector>

template <typename T>
int	easyfind(const T &t, int n)
{
	try{
		t[n];
	}
	catch(std::exception e)
	{
		return e.what();
	}
	return (0);

}
		
