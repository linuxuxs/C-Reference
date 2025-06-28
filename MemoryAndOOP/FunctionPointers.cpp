#include <iostream>
#include <vector>
using namespace std;

/* Function pointers

-- A function pointer is a pointer that holds the
    address of a function.
-- The type is same as the signature of the function 
    ( return type and arguments )
-- Can be used to indirectly invoke a function even
    if the function name is not known, when you wanna
    call a function at a particular time (a).
-- To get the address of a function, either use &funcName,
    or simply just it's name, without calling it.
*/

//a
void print(int& a){
    
    cout << a << " ";
}

void change(int& a){
    a = 0;
}

void forEach(vector<int>& numbers, void(*func)(int&)){
    
    for(int& number : numbers)
        func(number);
        
    cout << endl;
}

//other examples

void test(){
    cout << "This is a test function\n";
}
int doubleIt(int a){
    return a *= 2;
}
int main() {
    
    vector<int> list1 = {1,2,3,4,5};
    
    forEach(list1, print);
    forEach(list1, change);
    forEach(list1, print);
    cout << "\n";
    
    //you can also use the auto keyword to
    //determine the type of the function pointer:
    auto func = test;
    
    //2 ways to call it:
    func();
    (*func)();
    
    cout << "\n";
    
    //with arguments:
    int(*argsFun)(int) = doubleIt;
    
    int x = (*argsFun)(5);
    
    cout << "X is: " << x << "\n";
}


/* THE OUTPUT:

1 2 3 4 5 

0 0 0 0 0 

This is a test function
This is a test function

X is: 10

*/



