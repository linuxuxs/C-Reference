C++ passing by value	
-------	
In C++, when you pass an argument into a function call, were actually passing a copy of that argument - so if that changes, the actual value **WONT** change.	
Lets take as an example a function that changes our parameter to the value 100.	

	#include <iostream>
	using namespace std;

	void change(int x){	
	  x = 100;
	  cout << "Value inside the function: " << x << endl;
	} //   --out-of-scope	
	
	int main(){
	  int number {4};
	  cout << "Value of variable BEFORE the function call: " << number << endl;	

	  change(number);

	  cout << "Value of variable AFTER the function call: " << number << endl;	
	}	

As you can see, our function takes an integer, and changes it to 100 then shows the value of x (locally);	
In our main, we output the value of number before and after the function call. 	
The output will be:	

	Value of variable BEFORE the function call: 4
	Value inside the function: 100
	Value of variable AFTER the function call: 4	

That is because the value inside the function was changed locally, because our function **change** made a copy of **number** - and it changed that copy; when the function goes out of scope, that copy is destroyed. But what if ws wanted to actually change that variable?	

To do that, we can use:	    

C++ passing by reference:	
------	

Passing by reference will tell the compiler "Hey, dont make any copy of the argument, but rather take **ACTUAL** one and change its **ACTUAL** value.	  
* We will use the address-of operator (&) to pass it by reference; it literally gives the memory address instead of the copy, so it will change that memory address's value.	  

```
#include <iostream>
using namespace std;

void change(int &x){	
  x = 100;
  cout << "Value inside the function: " << x << endl;
} //   --out-of-scope	
	
int main(){
  int number {4};
  cout << "Value of variable BEFORE the function call: " << number << endl;	

  change(number);

  cout << "Value of variable AFTER the function call: " << number << endl;	
}	
```
	
The output now is:	
	Value of variable BEFORE the function call: 4
	Value inside the function: 100
	Value of variable AFTER the function call: 100	

Not only did it changed x to 100 locally, but the ACTUAL value of our parameter too.	
If we were to output **&x**, it would give the memory address of any argument we put, for example the memory address of number, which is a hexadecimal number.	
