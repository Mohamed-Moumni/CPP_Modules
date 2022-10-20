#include "Account.hpp"
#include<iostream>
#include<iomanip>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void    _diplayTimestamp(void)
{

}

Account::Account(void)
{
    if (this->_accountIndex == 8)
        this->_accountIndex = 0;
    Account::_displayTimestamp();
    std::cout << " " << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";created" << std::endl;
}

void Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << " " << "accounts:" << Account::_nbAccounts << ";" << "total:" << Account::_totalAmount << ";desposits:" << Account::_totalNbDeposits <<
    ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void    Account::displayStatus( void ) const
{
    if (this->_accountIndex == 8)
        this->_accountIndex = 0;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
}