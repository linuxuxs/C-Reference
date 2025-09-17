#include "account.h"

Account::Account(std::string name_, double balance_)
    : name{name_}, balance{balance_}{
}

bool Account::deposit(double amount){

    if(amount < 0){
        return false;
    } else {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount){

    if(balance - amount >= 0){
        balance -= amount;
        return true;
    } else {
        return false;
    }
}

double Account::get_balance () const{
    return this->balance;
}

std::ostream& operator<<(std::ostream &os, const Account& acc){

    os << "[ Account name: " << acc.name << ". Balance: " << acc.balance << " ]\n";
    return os;
}