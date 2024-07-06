#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ): _amount(initial_deposit){
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount += _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

void Account::_displayTimestamp() {
    time_t res;
    time(&res);
    tm* local = localtime(&res); 

    std::cout   <<  std::setfill('0')  <<  "[" << local->tm_year + 1900 
                <<  std::setw(2) <<  local->tm_mon + 1
                << std::setw(2) << local->tm_mday << "_"
                << std::setw(2) << local->tm_hour
                << std::setw(2) << local->tm_min
                << std::setw(2) << local->tm_sec << "] ";
}

void Account::displayAccountsInfos( void ) {
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}