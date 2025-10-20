Working with multiple files in c++!	
-----------------------	

You can create the declarations inside a *header* file, then implement it in a .cpp file!	

Before you use a header file, you need to take care of an issue, if you include the same header multiple times then the compiler will have that declaration multiple times and we will get an error for dublicates.	

To solve this issue, you just need to add an *include guard*.	
An include guard assures that the compiler will process that header file only once.	

An include guard is literally a sequence of  preprocessor directives.	

A preprocessor directive is a line of code preceded by a hash sign #. The preprocessor examines these directives before compilation and solves these before any code is executed. 	

```
#ifndef SOME_NAME   //this checks if SOME_NAME is not defined
#define SOME_NAME  //if its not then it will do it
    //declaration
#endif
```
Keep in mind, if the #ifndef condition is already defined, then it will skip the code inside that directive till the #endif.		


Nowdays, you will also see #pragma once, its the same as the #ifndef #defined #endif, but its newer and safer.	


