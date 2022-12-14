/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 08:41:46 by mmoumni           #+#    #+#             */
/*   Updated: 2022/10/22 08:41:49 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include<iostream>
#include<iomanip>
#include<ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
    char buffer_time[20];
    std::time_t tim = time(NULL);
    struct std::tm * ptm = std::localtime(&tim);
    strftime(buffer_time, 20, "%Y%m%d_%H%M%S", ptm);
    std::cout << "[" << buffer_time << "]";
}

int Account::checkAmount( void ) const
{
    return (this->_amount);
}

int Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

int Account::getTotalAmount( void )
{
    return (Account::_totalAmount);
}

int Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}

Account::Account(int initial_dep)
{
    Account::_displayTimestamp();

    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
    Account::_totalAmount += initial_dep;
    this->_amount = initial_dep;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    std::cout << " " << "index:" << this->_accountIndex << ";" << "amount:" << this->checkAmount() << ";created" << std::endl;
}

void Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();

    std::cout << " accounts:" << Account::_nbAccounts << ";" << "total:" <<
    Account::_totalAmount << ";desposits:" << Account::_totalNbDeposits <<
    ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void    Account::displayStatus( void ) const
{
    Account::_displayTimestamp();

    std::cout << " index:" << this->_accountIndex << ";amount:" << this->checkAmount() <<
    ";deposits:" << this->_nbDeposits << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();

    std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->checkAmount() <<
    ";deposit:" << deposit << ";amount:";
    
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    std::cout << this->checkAmount() << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
    bool dep_try = false;

    Account::_displayTimestamp();

    std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->checkAmount();
    if (withdrawal > this->checkAmount())
    {
        std::cout << ";withdrawals:refused" << std::endl;
    }
    else
    {
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        std::cout << ";withdrawals:" << withdrawal << ";amount:" << this->checkAmount() << ";nb_withdrawals:" <<
        this->_nbWithdrawals << std::endl;
        Account::_totalNbWithdrawals++;
        dep_try = true;
    }
    return (dep_try);
}

Account::~Account( void )
{
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->checkAmount() << ";closed" << std::endl;
}