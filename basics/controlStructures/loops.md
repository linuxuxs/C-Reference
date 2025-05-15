C++ loops	
---

In programming, loops are very useful when theres a need to repeat a specific task multiple times. In C++, this can be done in several ways:		
1. The for loops.	
2. Range-based loops.	
3. While loops.		
4. Do while loops.		

The for loop
----
The foor loop allows you to perform a task a specific number of times. So you will need to know in advance how many times you want the loop to run.			

	
	for( initialization; condition; increment/decremet ) {	
		//for loop body	
	}	

1. The initialization statement is used to initialize a counter variable, that will keep track of the number of iterations. It can be integer, size_t, double, but the most used one is the integer type.	
2. The condition statement is the base of the for loop, it checks the condition after each iteration; if its true, then the for loop continues to run; if its false, it stops.	
3. The increment/decrement statement is used to either subtract or add value to the initialization variable. Depending of the condition, you will have to take care of the increment/decrement.	
Here is a quick example:		

			
		for(int i{1}; i <= 10; i++){	
			std::cout << i << " ";
		}
		std::endl;

In this code, we created a variable i ( which is very used in for loops or any loop as a counter, but you can name it whatever you desire ) and we also initialized to 1. 
The for loop first checks the condition, is i smaller or equal than 10? Yes, because its one, so the for loop body statements are executed one by one. For our case, we only output the current value of 1. 
Then after that, it increments by 1, because i++ means "increase i by one", you can also use i += 2, or any other number, but this is the most used way because we want to only increment it by 1 each 
iteration and we only want to INCREASE it, not assign a new value! The for loop will run till the condition evaluates to false.	  
The output:  

    1 2 3 4 5 6 7 8 9 10


Nested for loops	
---	

The same as nested if statements, you can creted loops inside other loops:	
The following snipped will output the multiplication table 10 x 10.

		for ( int i { 1 }; i <= 10; ++i){    //a
			for( int j { 1 }; j <= 10; ++j){   //b
				std::cout << i <<  " * " << j << " = " 
					<< i * j << std::endl;
			}
		std::cout << "----------------------" << std::endl;
		} 



The a for loop is called the outter loop, and the b for loop is called the inner loop.	
Note: the inner loop loops "faster"!		


The continue and break statements in c++.	  
----	
	
In a loop, you can use the following statements:	  
1.Continue statement, this will skip the current iteration, which means it will ignore and continue the for loop.   
For example, lets say we display the numbers from 1 to 10, but we want to skip the number 4, we will use an if statement to check if our counter	  
 is 4, and if it is, we continue.   
	
	for(int i{1}; i <= 10; i++){	
		if(i == 4)	
			continue;		
		std::cout << i << std::endl;		
		//the output: 1 2 3 5 6 7 8 9 10
	}	

2.The break statement, this will exit the for loop. Lets say we want to output the numbers from 77 to 66, but for some reason we want to stop the for loop when the counter is 70. We can use a break statement!		    

	for(int i{77}; i >= 66; i--){
			if(i == 70)	
				break;
			std::cout << i << std::endl;
			//the output: 77 76 75 74 73 72 71 
		}


C++ range-based loops (introduced in C++11!)	  
----

Range based loops are a way to easily loop! It was introduced in the c++11 standard.	  
Its syntax is pretty easy:	  

	for ( type var_name : container);	

The container can be arrays, strings, vectors etc..	  

They also added the auto keyword, which makes the type of the var_name be automatically deduced by the compiler at compile time!	  

Here is an example, we will output each letter from the string "Hello world" on a new line.		  

	for(auto x : "Hello world"){	
		std::cout << x << std::endl;	
	}	


C++ while loops.	
-----

	while (condition == true){
		//do smth
	}	

Pretty simple, the only thing you need to keep in mind is to make a way to exit the for loop at some point, you can make the condition to be a counter,   
or for example in a game logic, run the walk animation while the players running.	  

If you wont have a counter, it will run forever, which is called an infinite loop.	  
 Its a bad practice.	  

C++ do while loops.	  
---

	do{
    //smth
	} while (condition == true)

A do while loop is similar to a while loop, but with a key difference:	  
--it always executes the body at least once, before checking the condition.		  
In a  while loop, the condition is checked first then the body is executed.	  
	
	
