C++ aliases and pointers	
-----------	

The variables you create in your program gets stored in a part in memory called stack.	
The stack has memory cells, and each memory cell has an address in hexadecimal format. 

When you create a variable, the name is replacing that address, making it easier to access that cell. Of course, you can still see the address of that variable by using & (address-of operator).

	int x = 5;
	cout << &x;   //memory address

ALIASES	
-----------	

An alias is created using the address-of operator, and it's just another name for a variable. If you change the value of the alias, the variable is changed too.	

	int x = 5;
	int &alias = x;
	cout << alias << "\n";    //5
	x = 99;
	cout << x << "\n";          //99
	cout << alias;              //99

POINTERS	
-----------------	

A pointer is a special type of a variable - it holds a memory address.	

So, when you create a pointer for a variable, you can say it's an alias for that variable, because the pointer **points/indicates** to the memory address of that variable.	

	int x = 5;
	int *ptr_x = &x;


In order to store that address in the pointer, you must use the & operator.  As you can see, **ptr_x** is a pointer to an integer. 

In C, the type of a pointer can even be void - meaning it is used when we don't know the data type of the variable that the pointer points to, but in C++ it is rarely used like this.

When you create pointers, ALWAYS initialize them, because if you create raw pointers (just declaration), it will point to a random memory address, so if you will try to change/use that pointer, you might change something that you mustn't.

So, always initialize your pointers - to a memory address,  or even 0. This means that it doesn't point nowhere.	
Since C++11, there's a new keyword that is used with pointers in order to initialize them safely, it is the **nullptr** keyword, it make the pointer to indicate nowhere. even when just declared.	

	int *ptr = nullptr;	


DEREFERENCING POINTERS	
--------------	

When you want to use the value of the variable that the pointer points to, you must dereference it first, using the dereferencing operator (*).

	int num {50};
	int* ptr {&num};
	cout << *ptr << "\n";    // 50
	cout << ptr;        //memory address

DYNAMIC MEMORY ALLOCATION	
--------------	

When you allocate dynamic variables, they are stored in the **heap**.	
The heap is a part in the memory where manually created variables are stored.	
As you know, automatically variables (local ones that you usually create) are stored in the stack.	

You can allocate memory for a specific type, by using the **new** keyword.	
Also, in order to access that new memory created, you must use a pointer. This is the only way to access it.

After usage, ALWAYS delete the dynamic allocations. If you won't, you have a chance to fall into a memory leak.	

	int *ptr = new int;
	
You can even create a block of memory - known as an dynamic array:	

	float *ptr = new float[x];

Replace the x based on the size of the array.

There are 2 ways you can access the array elements from the heap:	

The offset notation - in this method, you need to add to the pointer in order to increase the index, then dereference it:  ***(ptr + index)** 	

The subscript notation - in this method, you can use the [] to access the elements, just like a normal array:  **ptr[index]**	

DELETING ALLOCATIONS	
------------	

After creating and using the dynamic memory, you must free it by using the **delete** keyword:
	
	delete ptr;

For arrays, you need to add []:

	delete [] ptr;
