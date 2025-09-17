#pragma once
#include <iostream>
#include <string>


class Account {
    //overloaded insertion operator
    friend std::ostream& operator<<(std::ostream &os, const Account& ac);
private:
	//static - gives the var internal linkage, only one copy pre CLASS, not object.
	//constexpr const - the default_name is constant at compile-time, and also the pointer 
	//is constant, so it doesnt change where it points to.
    static constexpr const char* default_name = "Unamed";
	//you dont need const here, bc constexpr is already used.	
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