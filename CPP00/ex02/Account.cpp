/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:42:32 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/07 14:00:43 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {
	t::_displayTimestamp();
	this->_amount = initial_deposit;
	this->_accountIndex = t::_nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	t::_totalAmount += initial_deposit;
	t::_nbAccounts ++;
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
}

Account::~Account( void ) {
	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
}

int	Account::getNbAccounts( void ) {
	return t::_nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return t::_totalAmount;
}

int	Account::getNbDeposits( void ) {
	return t::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return t::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
	t::_displayTimestamp();
	std::cout << "accounts:" << t::getNbAccounts();
	std::cout << ";total:" << t::getTotalAmount();
	std::cout << ";deposits:" << t::getNbDeposits();
	std::cout << ";withdrawals:" << t::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const {
	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;	
}

void	Account::makeDeposit( int deposit ) {
	int	p_amount = this->_amount;

	this->_amount += deposit;
	this->_nbDeposits += 1;
	t::_totalAmount += deposit;
	t::_totalNbDeposits ++;
	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << p_amount;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;	
}

bool	Account::makeWithdrawal( int withdrawal ) {
	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	if (withdrawal > this->_amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	t::_totalAmount -= withdrawal;
	t::_totalNbWithdrawals ++;
	std::cout << ";withdrawal:" << withdrawal;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

void	Account::_displayTimestamp( void ) {
	time_t		timer;
	struct tm	*timeinfo;
	char		buffer[18];

	time(&timer);
	timeinfo = localtime(&timer);
	strftime(buffer, 18, "[%Y%m%d_%H%M%S]", timeinfo);
	std::cout << buffer;
}
