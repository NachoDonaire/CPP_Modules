#include <tests.hpp>

void	Account::displayAccountsInfos(void)
{
	std::cout << "Algoooo" << std::endl;
}

Account::Account(int	initial_deposit)
{
	_totalAmount = initial_deposit;
}

Account::~Account(void)
{
	_totalAmount = 0;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal == 1)
		return true;
	return 0;
}

int	Account::getTotalAmount(void)
{
	
