C++ ARRAYS	
-----
Arrays are compound data type or a data structure. An array is a collection of elements of the same type. The elements can be accessed by their index. C++ is a 0-indexed programming language, which means the index starts at 0.	
* Arrays have a fixed dimension		  
* Arrays are stored continuously in memory
     
      DECLARATION: data_type name_array [number of elements];		   	  
	  INITIALIZATION: data_type name_array[number of elements] {init list};	  
Example: 

    double temps [3] {24.6, -3.4, 18.9};	
---
Careful with arrays, because its fixed in size, once you tell the compiler the dimension of the array, you cant go past that. It will go out of bounds, and you will experience an error. 	    

How is an array working under the hood?	     
---
The name of the array is actually the **memory address** of the array, so if we output ONLY the name of the array, without providing an index, we will see a hexadecimal number, the memory address of that array (also of the first element). 		

```
  int arr[3] {1,2,3};		  
  std::cout << arr << std::endl;	    //here will output the memory address		
  std::cout << arr[0] << std::endl;         //1		
  std::cout << arr[1] << std::endl;         //2		
```

Multidimensional arrays ( matrix )	
--------------------------------	
	DECLARATION: data_type name_arr [dim1_size][dim2_size];	
dim1_size = row		  
dim2_size = colum		  

	INITIALIZATION: data_type name_arr[x][y] { {1,2,3}, {1,2,3} };	  
	ACCESS ELEMENTS: name_arr[indexOfDim1][indexOfDim2];  

Example:

```
int someNums [2][3] {
  {1,2,3},
  {4,5,6}
};

someNums[0][0];   //this is the first element from the first row ( 1 )		
someNums[0][2];   //this is the last element from the first row ( 3 )		
someNums[1][1];  //this is the second element from the second row ( 5 )			
```

Between rows, you must provide with a comma ( , ) and dont forget to end the matrix with semicolon ( ; ).  
