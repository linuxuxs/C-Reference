If statements	
----  

Let's say that we want to make a specific thing based on the trueness of a condition.   
We can use an *if statement*, which will let us choose a path to continue our program based on  a condition.	  

	if (condition){		
		//do something	
	}	

If the condition evaluates to *true*, then the block code will be ran, but if its false, then it will skip it.	  
In case that we have one more path or more, we can use else and else if blocks:	  

	if (condition1 == true ){	
		//do something if condition1 is true	
	} else if ( condition2 == true ) {		
		//do something else if condition2 is true	
	} else {	
		//do something if none of the conditions are true, its like the default block		
	}		

Example:	  

	int x = 10;	
	
	if ( x < 0) {
		s-t-d::cout << "The number is negative" << s-t-d::endl;	
	} else if ( x > 0 ) {
		s-t-d:: cout << "The number is positive" << s-t-d::endl;
	} else {	
		s-t-d::cout << "The number is 0." << s-t-d:: endl;	
	}


Nested If statements	
------
Nested statements are control structures (if, loops, switch) that are placed inside another.	

Nested **if statements**  are used to check multiple conditions.	
here is a quick example:

	if(condition1==true){
		if(condition2 == true){
			//do smth
		} 
	}


