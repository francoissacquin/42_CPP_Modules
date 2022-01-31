#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	Account::_totalAmount += initial_deposit;
	this->_accountIndex = Account::getNbAccounts();
	Account::_nbAccounts += 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this ->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
	return ;
}

Account::Account( void )
{
	this->_accountIndex = Account::getNbAccounts();
	Account::_nbAccounts += 1;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this ->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
	return ;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->checkAmount();
	std::cout << ";closed"<< std::endl;
	return ;
}

void	Account::_displayTimestamp( void )
{
	time_t	tt;
	struct tm * ti;

	time(&tt);
	ti = localtime(&tt);
	std::cout << "[" <<(ti->tm_year + 1900);
	std::cout << std::setfill('0') << std::setw(2) << ti->tm_mon;
	std::cout << std::setfill('0') << std::setw(2) << ti->tm_mday << "_";
	std::cout << ti->tm_hour << ti->tm_min << ti->tm_sec << "] ";
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->checkAmount();
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << this->checkAmount();
	std::cout << ",nb_deposit:" << this->_nbDeposits << std::endl;

}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount < withdrawal)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex;
		std::cout << ";p_amount:" << this->checkAmount();
		std::cout << ";withdrawal:refused" << std::endl;
		return 1;
	}
	else
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex;
		std::cout << ";p_amount:" << this->checkAmount();
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << this->checkAmount();
		std::cout << ",nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return 0;
}

int		Account::checkAmount( void ) const
{
	return this->_amount;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << Account::checkAmount();
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int		Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int		Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int		Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}
