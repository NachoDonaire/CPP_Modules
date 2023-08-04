#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <string>

class ScalarConverter
{
	private:
    		ScalarConverter(char ch, int in, float fl, double d);
 	public:
		/*static char	c;
		static int	i;
		static float	f;
		static double	d;

		static bool	infinite;
		static bool	nullchar;
		static bool	isfloat;
		static bool	nan;
		static bool	nw;*/
    		ScalarConverter();
    		ScalarConverter(const ScalarConverter &f);
    		~ScalarConverter();
    		ScalarConverter& operator=(const ScalarConverter &f);
		/*static void			setChar(char t);
		static void			setInt(int t);
		static void			setFloat(float t);
		static void			setDouble(double t);
		char			getChar() const;
		int			getInt() const;
		bool			getIsFloat() const;
		bool			getNaN() const;
	bool			getInfinite() const;
	float			getFloat() const;
	bool			getNw() const;
	bool			getNullchar() const;
	double			getDouble() const;*/
		class	InvalidTypeException : public std::exception{
			virtual const char *what() const throw() { return "Invalid type for convert" ; };
		};
		static void		convert(std::string str);
		static void		print_stuff(char c, int i, float f, double d, bool nan, bool infinite, bool isfloat, bool nw, bool nullchar);
		static int		isDigit(std::string &s, bool *nullchar);
};
//std::ostream &operator<<(std::ostream &os, const ScalarConverter &s);
#endif
