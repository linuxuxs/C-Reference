#include "checking_account.h"

Checking_account::Checking_account(std::string name_, double balance_, double fee_)
	: Account{name_, balance_}, fee{fee_}{
	
}

bool Checking_account::withdraw(double amount){
	
	if(balance - amount >= 0){
		balance -= amount;
		balance -= fee;
		return true;
	} else{
		return false;
	}
	
}

std::ostream& operator<<(std::ostream& os, const Checking_account& acc){
	os << "[ Checking account name: " << acc.name << ". Balance: " << acc.balance << ". Fee: " << acc.fee << " ]\n";
    return os;
}