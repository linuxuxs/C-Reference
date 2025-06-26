#include <iostream>
#include <string>
using namespace std;

//reverse a string without any libraries.

//C++ string
void reverseString1(const string&);

// C Style string
void reverseString2(const char[]);

int main() {
    const string test1 {"It's beautiful."};
    reverseString1(test1);
    reverseString1("Welcome");

    const char test2[6] = "Hello";
    reverseString2(test2);
    reverseString2("I'm going.");
}

void reverseString2(const char c[]) {
    int size{0};

    while (c[size] != '\0') {
        size++;
    }

        char newString[50];

    for (int i{0}; i < size; i++) {
        newString[i] = c[size - i -1];
    }

    newString[size] = '\0';

    cout << "The initial string: " << c << "\n";
    cout << "The reversed string: " << newString << "\n\n";
}

void reverseString1(const string &s) {
    int length{};

    for (auto x : s) {
        length++;
    }

    string newString{};

    //method one
    // for (int i {0}; i <= length; i++) {
    //     newString[i] = s[length - i - 1];
    // }
    //method two
    for (int i {length}; i >= 0; i--) {
        newString += s[i];
    }

    cout << "The initial string: " << s << "\n";
    cout << "The reversed string: " << newString << "\n\n";
}

