#define DEBUG 1
#define INFO 2
#define WARNING 3
#define ERROR 4
class Harl
{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
	public:
		void	complain(std::string level);
		Harl();
		~Harl();
};

typedef void (Harl::*t_fun) ( void );
