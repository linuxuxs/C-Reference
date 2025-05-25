C++ Scope rules	
-----	

**Scope** is the region of a program where an identifier is accessible.		
C++ uses scope rules to determine where that identifier can be used.	

Local/Block scope:	
--------	
 
* The local scope is declared inside {}.	
* The function's parameters has block scope.	
* Is visible only in the block that has been created.	
* The local variables inside a function are only active while the function is running.		
* The local variables are not preserved between function calls.		
* In nested blocks, the inner blocks can "see in", but the outter blocks cant "see in".	

Static local variables:	
-------	

* Delimited with the qualifier 'static'.	
* The value is preserved between function calls.	


Glocal scope:	
------	

* The identifier is declared outside any function or class.	
* The value is preserved.	
* Is visible in any part of the program. 	
* The global constants are OK (but best practice dont use them).		

Here are some examples:	

---
Ex 1: The static int will be preserved, so even tho we didnt create a global integer, the value is still saved. If we wont use a static int, the value will reset everytime we call the function. The global variable is accessible everywhere in your program.	
```
#include <iostream>
using namespace std;

int global_var {4};

void increment_x();  //function prototype

int main() {

	cout << "The global variable's value: " << global_var << endl;
	global_var = 222;
	cout << "The global variable's value: " << global_var << endl;
	increment_x();
	increment_x();
	increment_x();
	cout << "The global variable's value: " << global_var << endl;
}

void increment_x() { //function implementation
	static int x = 0;
	cout << "The value of x: " << x << endl;
	x++;
    global_var += 100;
}
```
OUTPUT:	
```
The global variable's value: 4
The global variable's value: 222
The value of x: 0
The value of x: 1
The value of x: 2
The global variable's value: 522
```

----
Ex 2: Even tho its the same name, the variable a has different values in different scopes.

As you can see, creating a new variable with the same name inside a block works, they will have different values; once the scope is gone, the variable is destroyed.		
But when we created the variable b, and assigned a new value inside the block, it changed its value; so its not different values.

```
#include <iostream>
using namespace std;

namespace someName{
    int a = 100;
}

int get_num(){
    int a = -55;
    return a;
}

int main(){
   int a{5}, b{};
   cout << "a inside main: " << a << endl;
   {
       int a = 9;
       b = 999;
       cout << "a inside a block scope: " << a << endl;
       cout << "b inside the block scope: " << b << endl;
   }    
   cout << "b inside main: " << b << endl;
   cout << "a inside main (again): " << a << endl;
   cout << "a inside the namespace: " << someName::a << endl;
   cout << "a inside the function: " << get_num() << endl;
}

```	
OUTPUT:	
```
a inside main: 5
a inside a block scope: 9
b inside the block scope: 999
b inside main: 999
a inside main (again): 5
a inside the namespace: 100
a inside the function: -55
```
