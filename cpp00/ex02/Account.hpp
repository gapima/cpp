#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <iostream>
#include <ctime>

class Account {
    public:
        Account(int initial_deposit);
        ~Account();

        void makeDeposit(int deposit);
        bool makeWithdrawal(int withdrawal);
        int checkAmount() const;
        void displayStatus() const;

        static void displayAccountsInfos();

    private:
        static int _nbAccounts;
        static int _totalAmount;
        static int _totalNbDeposits;
        static int _totalNbWithdrawals;

        static void _displayTimestamp();

        int _accountIndex;
        int _amount;
        int _nbDeposits;
        int _nbWithdrawals;
};

#endif