#pragma once
#include <vector>
#include "account.h"
#include "savings_acc.h"
#include "checking_account.h"
#include "trust_account.h"

template <class T>
void display(const std::vector<T> &accounts, const char* title){
	std::cout << "\n===" << title << "======================================================\n";
	for(const auto &acc : accounts)
        std::cout << acc << "\n";
}

template <class T>
void deposit(std::vector<T> &accounts, double amount, const char* title){
	 std::cout << "\n===Depositing to " << title <<"==========================================\n";
    for(auto &acc : accounts){
        if(acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << "\n";
        else
            std::cout << "Failed deposit of " << amount << " to " << acc << "\n";
    }
}

template <typename T>
void withdraw(std::vector<T> &accounts, double amount, const char* title){
	std::cout << "\n===Withdrawing to " << title << "==========================================\n";
    for(auto &acc : accounts){
        if(acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << "\n";
        else
            std::cout << "Failed withdrawal of " << amount << " from " << acc << "\n";
    }
}



