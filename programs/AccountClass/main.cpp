#include <iostream>
#include <vector>
#include "savings_acc.h"
#include "account_util.h"
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

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    //savings account

    vector<Savings_account> sav_accounts;
    sav_accounts.push_back(Savings_account {});
    sav_accounts.push_back(Savings_account {"Superman"});
    sav_accounts.push_back(Savings_account {"Batman", 2000});
    sav_accounts.push_back(Savings_account {"Wonderfulwoman", 5000, 5.0});

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
}
