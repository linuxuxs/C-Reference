How does function calls work in the memory?	
---------	

	The functions use the 'function call stack'.	

* It uses LIFO ( Last in, First out ) - take as an example a stack of books, you put 3 books on top of another, but you cant take the last one before taking everything off it.	

* Push (when adding in the stack); Pop (when removing from the stack);

* In c++, these items are called stack frames (or activation records) - a collection of information that represents an active function.	

* Here is where we store local variables, return address,  parameters etc...	

* When a function is called, an activation record is created and its being pushed into the stack; when the function goes out of scope, the activation record is popped out.	

* The stack has a finite size - if you call too many, you can have a stack overflow.	

```
             HEAP  
	
     FREE STORE              		
---------------------------

          STACK

---------------------------
      Static variables
    (or global variables)
---------------------------
        Code area

```	

Lets take as a simple example this program:	
```
#include <iostream>
using namespace std;

void changeX(int x){
 //a)   x = 0;
    cout << "parameter inside the func: " << x << endl;
}

int main(){
    
    int num{10};
    cout << "num inside main: " << num << endl;
    
    changeX(num);
    cout << "num after func call: " << num << endl;
    
}
```	

First off, our program starts in the main function; first statement that is being executed is **int num {10};**, we are initializing a variable named num - it will be stored in the stack, inside the static variables area, and it will have a value of 10.	

* The second execution in our program is **cout << "num inside main: " << num << endl;**, we are just outputting the value of that variable.	

* The next step is calling our function, that will be pushed inside the stack area, and we will go inside th function (see where is a) noted in the program); also, we expect an integer argument, so our num's value will replace the argument 'x' from the function.	

```
                          HEAP  

                        FREE STORE              
-------------------------------------------------

                        STACK

------------------------------------------------- a

changeX(10):             x = 10;
------------------------------------------------- b

                        num = 10;
-------------------------------------------------
```

Remember, from 'a' to 'b' is our stack area. I drew a line because thats the stack frame (or activation record), so thats our function's area. If we call another function, it will be pushed on top of the changeX() function, a different activation record.	

* Inside the function, we change the value of x to be 0, so from 10, we will have 0. 	

```
                          HEAP  

                        FREE STORE              
------------------------------------------------- a

changeX(10):             x = 0;
------------------------------------------------- b

                        num = 10;
-------------------------------------------------

       
```	

* After changing, we output the value of x (which is 0).

* Then our function scope is gone, so it will be popped out of the stack.		

```
                          HEAP  

                        FREE STORE              
------------------------------------------------- a
------------------------------------------------- b

                        num = 10;
-------------------------------------------------

       
```	

* Back inside our main, after the function call, we simply output the value of our variable **num**, which is still 10
(because we didnt use pass-by-reference to change the actual value); if we would, that x variable inside the function would point to **num**,
and if we change x, num will be also changed. After the main scope is gone, **num** is destroyed.

