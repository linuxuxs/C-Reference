C++ PRINTING STATEMENT
----

In c++, you CANT use print("Hello world!"), we will use the header file *iostream* that provides the input/output streams ( std::cout and std::cin ) 	

----
A header file is a file that includes declarations and definitions of different classes, function prototypes, variables declaration and so on...	
Just think of it as a reusable file.	
  
In our case, we are using the iostream header file, which we will include it by using this preprocessor directive:	  

	#include <iostream>		

----

A preprocessor directive will tell the compiler to preprocess first before it gets compiler, so it will copy the entire contents of another file (header file) and then compile it.	

In order to use the output in c++, we MUST use that header file.	

So here we are, we included that header file, now we can finally output something!	

	#include <iostream>		
	int main(){
	    
	    std::cout << "Hello world!" << std::endl;		
							
	    return 0;
	}	

std::endl is used to add a new line, meaning you will go to the next line.	  

int main() its the start point of our program, its the main function, everything will be run here.   
The return 0 statement literally means if the program ran without any errors.  
The main scope its surrounded by { }.

----

C++ INPUT	
--------------------------------

In c++, you can use the iostream header file to get input from the user as well.	  
Just use the std::cin to let the user enter anything.   
The std::cin reads up to the whitespace, meaning if you want to store in a string for example "hello world", it wont work like expected, because the "world" is still in the buffer, and only "hello" is stored in the variable.  
So you can do smth like:  

    #include <iostream>
    
    int main(){
        int a{}, b{};

        std::cout << "Enter 2 numbers separated by a space:" << std::endl;   //we enter 10 20
        std::cin >> a;      //the 10 gets stored in a
        std::cin >> b;      //and the 20 gets stored in b
        return 0;
    }


  
TIP: In c++, you can surround senteces in the output statement by both single and double quotes, as long as they match.		  	
TIP2.0: In c++, you can also use the brace initialization {} , it will set the variable to 0 even if you dont specify the value. 	  

---

