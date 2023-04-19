class	Weapon
{
	private:
		str::string type;
	public:
		Weapon(std::string type);
		~Weapon();
		std::string&	getType();
		void		setType(std::string newType);
};


