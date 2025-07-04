#include <iostream>
#include "mystring.h"
#include <vector>

int main(){

    Mystring s1;
    Mystring s2{"Hello"};
    Mystring s3{s2};


    std::cout << "Empty string:  ";
    s1.display();
    std::cout << "One argument: ";
    s2.display();
    std::cout << "Copy: ";
    s3.display();

    Mystring a;
    a = s2;

    a = "This is a test";
    std::cout << "The copy assignment: ";
    a.display();

    std::cout << "\nMore words: ";

    Mystring stooges {"Nico, Leta, Nicol and Eta"};

    stooges.display();

    std::vector<Mystring> list;

    list.push_back("Mama");
    list.push_back("Tata");
    list.push_back("Eu");

    std::cout << "Loop 1: ------------\n";

    for (const Mystring& n : list) {
        n.display();
    }

    std::cout << "Loop 2: ------------\n";

    for (Mystring& x : list) {
        x = "Changed";
    }

    std::cout << "Loop 3: ------------\n";

    for (const Mystring& n : list) {
        n.display();
    }

}