#pragma once
#include "account.h"

class Checking_account : public Account{
    friend std::ostream& operator<<(std::ostream& os, const Checking_account& acc);
private:
    static constexpr const char* default_name = "Unamed Checking Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_fee = 1.50;
protected:
    double fee;
public:
    Checking_account(std::string name_ = default_name, double balance_ = default_balance, double fee_ = default_fee);
    bool withdraw(double amount);
};