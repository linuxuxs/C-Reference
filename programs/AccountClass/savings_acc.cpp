#include "savings_acc.h"

Savings_account::Savings_account(std::string name_, double balance_, double interest_rate_)
    :Account{name_, balance_}, interest_rate{interest_rate_}{
    
}
bool Savings_account::deposit(double amount){
    amount += amount * (interest_rate / 100);
    return Account::deposit(amount);
}


std::ostream& operator<<(std::ostream &os, const Savings_account& acc){
    os << "[ Savings account name: " << acc.name << ". Balance: " << acc.balance << ". Interest rate: " << acc.interest_rate << " ]\n";
    return os;
}