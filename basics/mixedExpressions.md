MIXED EXPRESSIONS	
-----

In C++,  there are types when your expression has the operands with different data types, for example:   

    int a + double b;	  

If the operands has different data types, then c++ will try to convert one.	    
This can affect the result of the expression.  

When c++ will automatically try to convert the types, this is called *type coercion*.	  
If it cant then there will be an error.	  
	
The higher and lower data types chart:	  

	Long double, double, float, unsigned long, long, unsigned int, int.  
	short and char are always converted to int.  
	
higher - those that can contain smaller values.		  
lower - those that can  contain bigger valuer.		  

Promotion - the conversion of a bigger type. (higher)	  
ex: int and double, it will promote the integer into a double.  
Demotion - the conversion of a smaller type. (lower)	  
ex: double = 12.4 into an int which is now 12. The decimal part is now gone.	  

If you want to manually transform into a specific type, you can use:	  

	static_cast<x>(...), where x is the data type you wanna chance to.	  

EX:  
	
	int total_amount{100};
	int total_number{8};
	double average{0.0};

	average = total_amount / total_number;	
	s-t-d::cout << average;   //this will output 12. 

Here happened a demotion. Sometimes even the decimal part is very needed, so we can cast one of them into a double, giving us the right result.  

	average = static_cast<double>(total_amount) / total_number;	  
	s-t-d::cout << average;	//this will output 12.5  





