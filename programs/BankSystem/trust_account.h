#include "savings_acc.h"

class Trust_account : public Savings_account{
	friend std::ostream& operator<<(std::ostream& os, const Trust_account& obj);
private:
	static constexpr const char* default_name = "Unamed Trust Account";
	static constexpr double default_balance = 0.0;
	static constexpr double default_interest_rate = 0.0;
public:
	Trust_account(std::string name_ = default_name, double balance_ = default_balance, double interest_ = default_interest_rate);
	bool deposit(double amount);
};