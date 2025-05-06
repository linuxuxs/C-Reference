C++ Vectors!	
-----
In C++, a better and safer way to store a collection of elements of the same type is to use a vector. A vector works the same way like a C++ array.  	
* A vector is a dynamic array - part of the standard template library (STL)   	
* A vector is considered an object	  
* A vector can grow/shrink in size	  
* Stored continuously in memory	  
* You can use methods ( sort, reverse, find etc...)  
* So you dont have to tell the compiler how big the vector will be.	  
* Very efficient	  
* Bound checking ( higher when using the .at method )	  

In order to use a vector, you must include the <vector> header file.	  

	  DECLARATION: vector<data_type> name_of_vector;	
	  INITIALIZATION: vector<data_type> name {elements};
ACCESS ELEMENTS:	   
* using the brackets: name[index];	  
* using the .at method: name.at(index);			  

You can also initialize:	  

    vector<data_type> name (5);  
**this will tell the compiler to create a vector with a size of 5 elements, and we used the () - constructor initialization syntax, so all of the elements will be initialized to 0!**	    

If we add a second argument inside the ():  

    vector<data_type> name (10, 50); 
  **the first number is how many numbers you want, and the second is to what you initialize all the elements**	

Here are some useful C++ vector methods!:	
---
-->push_back() - use this to add a new element to the end of the array	  
-->pop_back() - use this to remove the last element				  
--> *size() - use this to find the size of that vector*		  
--> *clear() -  clears the vector*			  



2D VECTORS	
-----


Just like arrays, you can create a multidimensional vector, heres how:	  
	
	DECLARATION: vector<vector<int>> vec_name;		
	
Pretty weird right?   	

	INITIALIZATION:	
	vector<vector<int>> vec_name {	
	   {1,2,3,4,5},	
	   {6,7,8,9,10}	
	}	

Keep in mind that vectors are dynamic arrays, meaning you dont have to specify how big the rows and columns are, like in an multidimensional array. 	  
---
