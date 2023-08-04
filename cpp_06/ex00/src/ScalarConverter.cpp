#include <ScalarConverter.hpp>

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &a)
{
	(void)a;
}

ScalarConverter::~ScalarConverter()
{
        std::cout << "ScalarConverter destructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &f)
{
        if (this != &f)
        {

        }
        return *this;
}

int	ScalarConverter::isDigit(std::string& s, bool *nullchar)
{
	int	i;

	i = 0;
	if (s[i] == '-')
	{
		i++;
		*nullchar = 1;
	}
	while (s[i])
	{
		if (s[i] == '.')
			i++;
		else
		{
			if (std::isdigit(s[i]) == 0)
				return (0);
			i++;
		}
	}
	return (1);
}
/*
void	ScalarConverter::setChar(char t)
{
	ScalarConverter::c = t;
}
void	ScalarConverter::setInt(int t)
{
	i = t;
}
void	ScalarConverter::setFloat(float t)
{
	f = t;
}
void	ScalarConverter::setDouble(double t)
{
	d = t;
}

char	ScalarConverter::getChar() const
{
	return this->c;
}

int	ScalarConverter::getInt() const 
{
	return this->i;
}

bool	ScalarConverter::getNw() const
{
	return this->nw;
}

float	ScalarConverter::getFloat() const
{
	return this->f;
}

double	ScalarConverter::getDouble() const
{
	return this->d;
}

bool ScalarConverter::getIsFloat() const
{
	return this->isfloat;
}

bool ScalarConverter::getInfinite() const
{
	return this->infinite;
}

bool ScalarConverter::getNaN() const
{
	return this->nan;
}

bool	ScalarConverter::getNullchar() const
{
	return this->nullchar;
}
*/
void	ScalarConverter::convert(std::string str)
{
	char	c;
	int		i;
	float	f;
	double	d;
	bool	infinite;
	bool	nullchar;
	bool	isfloat;
	bool	nan;
	bool	nw;

	c = ' ';
	i = 0;
	f = 0;
	d = 0;
	infinite = 0;
	nan = 0;
	nullchar= 0;
	isfloat = 0;
	nw = 0;
	try{
		if (str == "nanf" || str == "nan" || str == "inf" || str == "-inf" || str == "inff" || str == "-inff")
		{
			nan = 1;
			infinite = 1;
			return (print_stuff(c, i, f, d, nan, infinite, isfloat, nw, nullchar));
		}
		if (ScalarConverter::isDigit(str, &nullchar))
		{
			if (std::atof(str.c_str()) >= 2147483647 || std::atof(str.c_str()) <= -2147483648)
				throw ScalarConverter::InvalidTypeException();
			else if (str.find('.') != std::string::npos)
			{
				isfloat = 1;
				c = static_cast<char>(std::atof(str.c_str()));
				i = static_cast<int>(std::atof(str.c_str()));
				f = static_cast<float>(std::atof(str.c_str()));
				d = static_cast<double>(std::atof(str.c_str()));
			}
			else
			{
				c = (static_cast<char>(std::atoi(str.c_str())));
				i = (static_cast<int>(std::atoi(str.c_str())));
				f = (static_cast<float>(std::atoi(str.c_str())));
				d = (static_cast<double>(std::atoi(str.c_str())));
			}

		}
		else if (str.size() == 1)
		{
				c = (static_cast<char>(str[0]));
				i = (static_cast<int>(str[0]));
				f = (static_cast<float>(str[0]));
				d = (static_cast<double>(str[0]));
		}
		else
		{
			nw = 1;
			throw ScalarConverter::InvalidTypeException();
		}
	}
	catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
	print_stuff(c, i, f, d, nan, infinite, isfloat, nw, nullchar);
}

void	ScalarConverter::print_stuff(char c, int i, float f, double d, bool nan, bool infinite, bool isfloat, bool nw, bool nullchar)
{
	if (nw == 1)
	{
		std::cout << "No valid input" << std::endl;
		return ;
	}
	if (isfloat == 1 || nullchar == 1)
		std::cout << "char : Non displayable" << std::endl;
	else if (infinite == 1 || nan == 1)
		std::cout << "char : Impossible" << std::endl;
	else
		std::cout << "char : " << c << std::endl;
	if (infinite == 1 || nan == 1)
	{
		std::cout << "int : " << "nan"  << std::endl;
		std::cout << "float : " << "nan" << std::endl;
		std::cout << "double : " << "nan" << std::endl;
		return ;
	}
	std::cout << "int : " << i << std::endl;
	std::cout << "float : " << f << std::endl;
	std::cout << "double : " << d << std::endl;
}
