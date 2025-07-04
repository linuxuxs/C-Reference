#pragma once

class Mystring {
    char* str;
public:
    //constructor - no args
    Mystring();
    //constructor - one arg
    Mystring(const char*);
    //copy constructor
    Mystring(const Mystring&);
    //destructor
    ~Mystring();

    //copy assignment - operator= overloading method declaration
    Mystring &operator=(const Mystring&);


    //getters and methods
    [[nodiscard]] char* get_str() const;
    void display() const;
};