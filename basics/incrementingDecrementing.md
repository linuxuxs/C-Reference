Incrementing and decrementing in C++	
----

Incrementing means to add up to a value, while decrementing means to take from that value.   
In C++, you can easily make that by using ++ or -- to the variable you want, that will ONLY add or take 1, but that is very usefull, especially in loops.	  


Prefix increment (also known as preincrement)	
------------------------------------

Prefix means to add the ++ **BEFORE** the variable's name.	  
Let's say the varName has the value 5. 	  

    ++varName;	  
We incremented it, now its 6.	  

Postfix increment (also known as postincrement)	
---------------------------------------
Works the same as prefix, but you add ++ **AFTER** the variable's name. 

    varName++;  

* What is the difference between pre- and post- incrementation?
---

Well, when we preincrement, we FIRST INCREMENT the variable, THEN use it.	  
And when we postincrement, we first USE the variable, THEN increment it.	  
Here is an example, if we want to output the value of the varName which is initially 5:	  
```
std::cout << varName << std::endl;        //here will output 5		
std::cout << ++varName << std::endl;	  //explanation at a)	
std::cout << varName++ << std::endl;	  //explanation at b)
```

a) We first increment it, then use it, so the value after the incrementation is now 6, and then we output it, in the console.	  
b) We first output it in the console, THEN increment it, so the output will still be 5. After the incrementation the value is 6.	  


Prefix decrement (also known as predecrement) and postfix decrement (also known as postdecrement)		
----------------------------------------------------------------------	
Exactly, it works the same way as the incrementation, but instead of using ++ before and after the variable's name, we use --. And it will subtract one from the value.	  
--varName;	  
varName--;	  	

---

