Inline functions	
------	

In c++, you can create inline functions using the 'inline' specifier.	
That doesnt mean you create the function literally inline like: void Hello(){//code; }, but actually:		

* avoids function call overhead ( so when you call a non-inline function, it has several steps - jump, stack frame, etc; but when you use an inline function, it skips them.)	
* faster	
* compilers are smart nowdays, so they are automatically creating inline functions to generate faster code for you if it can, without specifing 'inline'.	

```
inline int add(int x, int y){	
	return x + y;
}

int main(){

	int result = add( 5, 5);  
//the compiler replaces this with: int result = 5 + 5
}
```	

------	

DYK: you can create a global and local variable with the same name, and use them both!	
All you have to do in order to use the global variable is to add '::' before the name.	

```
#include <iostream>
using namespace std;
int num = 99;

int main(){
	int num = 44;
	cout << num << endl;   //44
	cout << ::num << endl;  //99
}

```

