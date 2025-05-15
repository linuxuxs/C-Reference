C++ operators	
---------------

In c++, there are 3 sets of operators, unary, binary and ternary.	

The most used operators are:	  
	-- assignment   
	-- arithmetic	  
	--increment / decrement	  
	-- relational	  
	-- logical	  
	--member access	  
	--others	  

Assignment is literally when you create a variable, and either assign its value (initialization) or just the type and name (declaration).	  

Arithmetic are the expressions where you make math. ( 1+1, 3 - 1 * 9 so on...)	  

The relational operators are:	  
	-- >     ( greater than )		  
	-- <     ( less than )		  
	-- >=   ( greater or equal than )	  
	--  <=  ( less or equal than )  
	-- ==   ( is equal to)	  
	-- !=     ( not equal to )  

The ! (not) is literally making the reverse value.  

	a != b   // this means a is not equal to b
	! ( a < b )  //this means a is greater or equal to b.
 why? here is a chart:	

	! < will transform "<" to ">="	          
	! > will transform ">" to "<="						
	!>= will transform ">="  to "<"	
	!<= will transform "<=" to ">"	 

 But in c++, the conditions are evaluated to true or false, so if you do something like:	
	
	if ( ! (a > b) ) {
     ...
    }   
 it will evaluate the condition as true IF a is not greater than b.

! true -> false	  
! false -> true	  
	
There are ways to use these, but they are mostly used in conditions.	  

The logical operators are:	  
	-- &&	 ( and )  
	-- ||  (  or )	  

---
The && is used to check if 2 or more conditions are BOTH true:	  
If ONE is evaluated as false, then that make the whole condition as false.  

example:	  

	if ( a == 5 && b >= 5)  
This checks if both of the expressions are true, if one of them is false, then the whole condition will be false.  

---
The || is used to check if at least ONE is true:	  
If at least ONE is evaluated as true, then the whole condition is true.  
	
example:	
		
	if ( a == 5 || b >= 5)  //now, if at least ONE of them is true, the whole condition will be true.
Here is a little chart:	

	bool a = false;
	bool b = true;

	a && a -> false   (1)		
	a && b -> false  (2)	
	a || a -> false	(3)	
	a || b -> true	(4)


(1) - it evaluates to false because both of them are false.	  
(2) - it evaluates to false, because BOTH needs to be true in order to evaluate to true.	  
(3) - it evaluates to false, because both are false, and the || operator is checking if at least one of them is true (or in this case false).      
(4) - it evaluates to true, because ONE needs to be true in order to result true.  

If 2 conditions are false, then it will result as false.

If you use ! together with && and ||, these will be the result:	  

	! && - > ||	  
	! || -> &&  

But, by de Morgan's Laws, if we have something like ! ( a == false || b == true ), these are the transformations: 	  
	! ( a || b )  is equivalent to (! a && !b).	  

So in other words, the ! is placed before any condition (so its reversing the value, and the logical operator is inverted.)    
