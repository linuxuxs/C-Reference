#include "mystring.h"
#include <cstring>
#include <iostream>

//copy assignment - operator= overloading method implementation
Mystring &Mystring::operator=(const Mystring& rhs) {

    std::cout << "Copy assignment" << std::endl;
    //check if we assign to itself - if yes, return the
    if ( this == &rhs) {
        return *this;
    }

    //if not, we delete str so we can reallocate memory and copy from rhs.

    delete [] this->str;  //we use [] because that pointer is working like an array. (stored continuously)

    str = new char[std::strlen(rhs.str) + 1];   //we allocate memory based on the size of the value stored in the rhs string
    std::strcpy(this->str, rhs.str);   //then we simply copy it in this string (the one that is being assigned to)

    return *this;  //return this so we can chain assign.

}

//no args constructor
Mystring::Mystring()
    : str{nullptr}{
    //allocate one char for the null terminator
    str = new char[1];
    *str = '\0';
}

//one arg constructor
Mystring::Mystring(const char* x)
    : str{nullptr}{
   //if x is empty -> set the value to null terminator.
    if (x == nullptr) {
        str = new char[1];
        *str = '\0';
    }

    str = new char[std::strlen(x) + 1];
    std::strcpy(str, x);
}

//copy constructor

Mystring::Mystring(const Mystring&source)
    : str{nullptr} {
    str = new char [std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

//destructor
Mystring::~Mystring(){
    //freeing space
    delete [] str;
}

//display method
void Mystring::display() const {
    std::cout << this->str << std::endl;
}

//get string getter
char* Mystring::get_str() const {
    return str;
}