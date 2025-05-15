Switch satement	
------------

In C++, there is another alternative for an if statement, its called a *switch statement*.	  
It works the same, but its based on the value of a variable.	  
Instead of saying if, else if and else, the switch statement has cases.	  

	switch(expression){		

	case value1:		
			//do something	
			break;	
	case value2:	
			//do something	
			break;

	case value_n:		
			//do something	
			break;	
	default:	
			//do something as default, if no case matches.	
			break;	
	}			

	
* The break statement tells the program to exit the switch statement once the case is done.  
* If you wont put a break statement, the program will "fall through", meaning it will run the next case too.	  
* The default case runs if no case is found. (just like the else statement).  
	
