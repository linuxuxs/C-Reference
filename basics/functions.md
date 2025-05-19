C++ functions	
----	

In c++, you can create reusable code, so whenever you want to re-use a snipped or a specific task, you can use functions.   	
-- they are created by giving a return type, followed by a name then the parentheses.	  
-- inside the parentheses, you can specify arguments, those can help you with different things, for example if you want to use a number the user gives, you can use arguments.		  
-- the return type is what the function will return.  
-- there is a special return type, called void. With this, you wont need to return anything, because it doesnt expect you to. The return types are int, double float, etc..  

When we implement the functions, the placeholders inside the parentheses are called **parameters**, and when we call the function, they are called **arguments**.	  

Here is a quick example for a function that expects 2 integer arguments, and returns their product:    

	//function definition (implementation)
	int product(int a, int b){	
		return a * b;
	}	

You can also do it by creating a variable that holds the value and return the variable, but in this example is not needed.	  
Then, in main, we can call the **product** function, and we pass as arguments a and b.  

	int main(){	
		int a{ 4 }, b { 2 };	
		int result = product(a, b);   
	}	
We store the result in a variable, because the function returns an integer, it must be the same type!  

* DYK: The main function is a special case, even if it has an int return type,  you dont have to actually return anything! That is because the compiler knows already that it should return 0. This feature has been since c++11!	  
