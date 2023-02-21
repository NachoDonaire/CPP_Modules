#include "Account.hpp"

void	Account::displayAccountsInfos(void)
{
	std::cout << _accountIndex << "\n";
	std::cout << _amount << "\n";
	std::cout << _nbDeposits << "\n";
	std::cout << _nbWithdrawals;
}
