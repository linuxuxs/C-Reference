#include <iostream>
#include <vector>
#include "savings_acc.h"
#include "account_util.h"
#include "checking_account.h"
using namespace std;


int main(){

    //set the double decimal precision to 2.
    cout.precision(2);
    cout << fixed;


    //account

    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000});
    accounts.push_back(Account {"Curly", 5000});

    display(accounts, "Account");
    deposit(accounts, 1000, "Account");
    withdraw(accounts, 2000, "Account");

    //savings account

    vector<Savings_account> sav_accounts;
    sav_accounts.push_back(Savings_account {});
    sav_accounts.push_back(Savings_account {"Superman"});
    sav_accounts.push_back(Savings_account {"Batman", 2000});
    sav_accounts.push_back(Savings_account {"Wonderfulwoman", 5000, 5.0});

    display(sav_accounts, "Savings Account");
    deposit(sav_accounts, 1000, "Savings Account");
    withdraw(sav_accounts, 2000, "Savings Account");
	
	
	//checking account
	
	vector<Checking_account> check_accounts;
	check_accounts.push_back(Checking_account {});
	check_accounts.push_back(Checking_account {"Nico"});
	check_accounts.push_back(Checking_account {"Jennifer", 2000});
	check_accounts.push_back(Checking_account {"Mark", 5000});

	display(check_accounts, "Checking Account");
    deposit(check_accounts, 1000, "Checking Account");
    withdraw(check_accounts, 2000, "Checking Account");
	
	//trust account
	
	vector<Trust_account> trust_acc;
	trust_acc.push_back(Trust_account {});
	trust_acc.push_back(Trust_account {"Leo"});
	trust_acc.push_back(Trust_account {"Michael", 433, 2.5});
	trust_acc.push_back(Trust_account {"Mika", 5000, 7.6});
	
	display(trust_acc, "Trust Account");
    deposit(trust_acc, 5000, "Trust Account");
    withdraw(trust_acc, 2000, "Trust Account");
}
