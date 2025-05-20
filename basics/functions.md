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

C++ function prototypes	
----	

In C++, if you create a function AFTER the main function, then use it, you will most likely get a compiler error. 		
That is because the compiler didnt find the function definition or declaration anywhere. To fix this, we can use a function prototype! 		
Not only, we can use the function prototypes in order to  use multiple files in our project.				

The function prototype is declared at the top of the program.				
The return type, name, and number of arguments (and order) needs to be the exact same in both prototype and definition. 	

-- The name of the arguments can be omited in the prototype, but you need to give their name in the definition. 		
You can also give to the parameters total different names in the prototype and definition, the compiler doesnt care.				

	#include <iostream>
	
	//function prototype.
	void print(const char*);

	int main(){
		
		print("Hello");	

	}

	//function definition.
	void print(const char* message){	
		std::cout <<  message << std::endl;	
	}	

This function uses C-style strings as parameter and prints the message you give.			
As you can see, the prototype's parameter doesnt have a name, but the definition must have one. 	
Now, we can use function even if we created them after the main function.	

C++ default arguments	
---------	
	
In C++, you can add default values to the parameters!		 	
If you create a function prototype, you must include the name of the parameter, along with the default argument. 	
In the function implementation, you shouldnt add the default argument. Never place it in both the prototype and implementation.		

	
	#include <iostream>
	using namespace std;

	void check_for_parking_slot (const char* slot = "Empty"){
		if(slot == "Empty")
			cout << "This slot is free to take!" << endl;
		else if(slot == "Taken")	
			cout << "This slot is taken!" << endl;
		else
			cout << "Invalid argument." << endl;
	}	

	int main(){

		const char* state = "Taken";
    
   	 	check_for_parking_slot();
   	 	check_for_parking_slot(state);
    	check_for_parking_slot("Hello");
	}	

OUTPUT:

	This slot is free to take!
	This slot is taken!
	Invalid argument.

As you can see, if we dont specify any argument in the function call, the compiler will use the default argument we indicated.		
