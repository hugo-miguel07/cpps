/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:06:07 by htavares          #+#    #+#             */
/*   Updated: 2026/04/16 17:37:50 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(void)
{
	_nbAccounts++;
	_totalAmount += 0;
	_totalNbDeposits += 0;
	_totalNbWithdrawals += 0;
	
	this->_accountIndex = 0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

Account::Account(int initial_deposit)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_totalNbDeposits++;
	_totalNbWithdrawals += 0;
	
	this->_accountIndex = _nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 1;
	this->_nbWithdrawals = 0;
}

Account::~Account(void)
{
	_nbAccounts--;
	_totalAmount -= this->_amount;
}

int	Account::getNbAccounts( void )
{
	return(_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{

}

void	Account::makeDeposit( int deposit )
{
	_totalAmount += deposit;
	_totalNbDeposits++;
	
	this->_amount += deposit;
	this->_nbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_totalAmount -= withdrawal;
	_totalNbWithdrawals--;
	
	this->_amount -= withdrawal;
	this->_nbWithdrawals--;
}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	
}

void	Account::_displayTimestamp( void )
{
	
}
