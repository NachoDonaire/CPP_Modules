class HumanA
{
	private:
		std::string	name;
		Weapon 		w;
	public:
		HumanA(std::string, Weapon w);
		~HumanA();
		void	attack();
};
