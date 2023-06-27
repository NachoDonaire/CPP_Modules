#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


class Bureaucrat
{
	private:
		std::string	name;
		int			grade;
 	public:
    		Bureaucrat();
    		Bureaucrat(const Bureaucrat &f);
    		~Bureaucrat();
    		Bureaucrat& operator=(const Bureaucrat &f);
};

#endif
