#include "trust_account.h"

Trust_account::Trust_account(std::string name_, double balance_, double interest_)
	:Savings_account{name_, balance_, interest_}{
}

bool Trust_account::deposit(double amount){
	int bonus {};
	if(amount >= 5000)	bonus = 50;
	amount += amount * (interest_rate / 100);
	return Savings_account::deposit(amount + bonus);
}

std::ostream& operator<<(std::ostream& os, const Trust_account& acc){
	os << "[ Trust account name: " << acc.name << ". Balance: " << acc.balance << ". Interest rate: " << acc.interest_rate << " ]\n";
    return os;
}