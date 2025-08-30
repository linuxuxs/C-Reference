#pragma once
#include <iostream>
#include <string>


class Account {
    //overloaded insertion operator
    friend std::ostream& operator<<(std::ostream &os, const Account& ac);
private:
    static constexpr const char* default_name = "Unamed";
    static constexpr double default_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    Account(std::string name_ = default_name, double balance_ = default_balance);
    //Account(std::string name_ = "Unamed", double balance_ = 0.0); the same
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance () const;

};