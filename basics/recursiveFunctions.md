Recursive functions	
------	

A recursive function is a function that calls itself.	
It can call itself:	
* indirect ( throught a different function )
* direct 

It has a **base case** and divides the rest of the problem into subproblems.	
Be careful!! The base case is the part where the function will end at some point. Without one, you will get a stack overflow.	

*Unwinding* is when the recursive function is being cleared from the stack. 		

Example, the factorial of a number: 	

```
#include <iostream>
using namespace std;

unsigned long long factorial(unsigned long long x){
    
    if (x == 0 )    //base case
        return 1;
    return x * factorial(x - 1);   //recursive case
        
}

int main(){
    
    unsigned long long result = factorial(5);
    
    cout << result << endl;
    
}
```
OUTPUT:

	120
