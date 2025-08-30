#pragma once
#include "account.h"

//TODO: after done and it compilers, check if you can use default_balance from the 
//inherited class
//It doesnt work, because its private and it cant access it.
//to fix that, js change default_balance to protected/private in the base class

//This savings account deposit will be incremented by (amount * int_rate / 100)

class Savings_account : public Account {
    friend std::ostream& operator<<(std::ostream &os, const Savings_account& acc);
private:
    static constexpr const char* default_name = "Unamed Savings account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest_rate = 0.0;
protected:
    double interest_rate;
public:
    Savings_account(std::string name_ = default_name, double balance_ = default_balance, double interest_rate_ = default_interest_rate);
    bool deposit(double amount);
    //withdraw inherits from account
};

