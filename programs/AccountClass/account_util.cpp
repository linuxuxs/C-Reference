#include "account_util.h"
#include <iostream>

void display(const std::vector<Account> &accounts){
    std::cout << "\n===Accounts======================================================\n";
    for(const auto &acc : accounts)
        std::cout << acc << "\n";
}   

void deposit(std::vector<Account> &accounts, double amount){
    std::cout << "\n===Depositing to Accounts==========================================\n";
    for(auto &acc : accounts){
        if(acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << "\n";
        else
            std::cout << "Failed deposit of " << amount << " to " << acc << "\n";
    }
}

void withdraw(std::vector<Account> &accounts, double amount){
    std::cout << "\n===Withdrawing to Accounts==========================================\n";
    for(auto &acc : accounts){
        if(acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << "\n";
        else
            std::cout << "Failed withdrawal of " << amount << " from " << acc << "\n";
    }
}


void display(const std::vector<Savings_account> &accounts){
    std::cout << "\n===Savings Accounts================================================\n";
    for(const auto &acc : accounts)
        std::cout << acc << "\n";
}   

void deposit(std::vector<Savings_account> &accounts, double amount){
    std::cout << "\n===Depositing to Savings Accounts====================================\n";
    for(auto &acc : accounts){
        if(acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << "\n";
        else
            std::cout << "Failed deposit of " << amount << " to " << acc << "\n";
    }
}

void withdraw(std::vector<Savings_account> &accounts, double amount){
    std::cout << "\n===Withdrawing to Savings Accounts====================================\n";
    for(auto &acc : accounts){
        if(acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << "\n";
        else
            std::cout << "Failed withdrawal of " << amount << " from " << acc << "\n";
    }
}