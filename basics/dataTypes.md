BASICS OF C++. DATA TYPES. VARIABLES.
-------------------------------------------------------------------

The dimension of a data type is represented in bits.	  
A variable is a abstraction (simplification) of a memory location.

C++ has the following data types:
---
integer type - representing whole numbers ( 0, 10, -41, 81424, -4123 and so on...)	
type name            size/precision

| Data Type                      | Precision/Size          |
|---------------------------------|-------------------------|
| signed short int                | At least 16 bits        |
| signed int                      | At least 16 bits        |
| signed long int                 | At least 32 bits        |
| signed long long int            | At least 64 bits        |
| unsigned short int              | At least 16 bits        |
| unsigned int                    | At least 16 bits        |
| unsigned long int               | At least 32 bits        |
| unsigned long long int          | At least 64 bits        |
  

You dont have to worry about the type names, just keep in mind the following:	  
--->*If you need to store a massive number, mind the precision of the integer* 	  
---> *short means storing a small number, as for long long is the biggest you can store*		   
--->*signed literally means BOTH positive and negative numbers (it uses one bit to store the number's sign, if its positive + or negative -  )*		  
 --->*unsigned literally means ONLY 0 and positive numbers (so it doesnt use that bit)*	  
--->*by default, if you create a variable without specifing if its signed or unsigned, c++ will see it as signed.* 

---
	
Floating-point type - representing numbers with a decimal part ( 1.0, -51.18, 99.9309...)	  
Theres 3 types of floating-point type:	  
---float		--use this for not so big numbers	  
---double   --use this for medium size numbers	  
---long double    --use this for large floating-point numbers  

---

Boolean type - representing TRUE or FALSE values	  
In c++, 0 is false and non-zero values are true.	  	

---

Character type - representing ONE single character. ( 'a', 'A', 'C', '*', '@', '!' and so on...) 		    
type name - size/precision	  
char - one byte ( 8 bits)	  
char16_t - at least 16 bits	  
char32_t -  at least 32 bits	  
wchar_t - the biggest 	  

The character needs to be surrounded by single quotes. It DOESNT work with double quotes.  

What is a char in c++?	
 Well, characters in c++ (char) are actually a small integer type. It has 1 byte of memory, so you can easily store 256 different values.	

* from -128 to 127 if its signed.		
* from 0 to 255 if its unsigned.		

So based on this information, you can store a number, and that number can correspond to a value from the ASCII table. For example, the integer 65 stored in a char, can result in the letter 'A', because the ASCII code for A is 65.	

So basically, when you create a char that holds a letter or symbol, that actually stores the number that corresponds from the ASCII code.	

So that is why you can store a character in an enumeration type!	

---

* Global variables can be used *EVERYWHERE* in your program, its scope its global, meaning you can access it in any function or anywhere you might want to use it.  
* Local variables can be used *ONLY IN ITS SCOPE* meaning you cant access it from everywhere in your program.
* If you want variables that WONT change its value, use the const keyword.
```
const int x = 90;	  
x = 0;   //error  
```

Examples of variables and scope:	

  ```
char initial = 'G';  		
float num = 1.0;  	
{	  
int x = 10;		  
}		  

x = 19; 	    //error at this line  
```

As you can see, the variable x is initialized<sup>1</sup> inside the scope block, and we assign<sup>2</sup> a new value outside the scope which it will give us an ERROR because its not declared<sup>3</sup>.   

---

1 -  To initialize a variable is to create it AND give a value.		  
2 -  To assign a new value to a variable is to literally give it a new value to hold.		  
3 - To declare a variable is to ONLY create it, without giving it a value.	  
The best practice is to *ALWAYS* initialize your variables. 		  
