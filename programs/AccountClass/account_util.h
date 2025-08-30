#pragma once
#include <vector>
#include "account.h"
#include "savings_acc.h"

void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

void display(const std::vector<Savings_account> &accounts);
void deposit(std::vector<Savings_account> &accounts, double amount);
void withdraw(std::vector<Savings_account> &accounts, double amount);