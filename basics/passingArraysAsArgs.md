C++ passing arrays as arguments	
-----	


As you can know, when passing a variable as a argument, you're just passing a copy of that variable, not the actual value.	

This is not the case when you pass an array as an argument.	

The name of the array is the memory address of the first element, so when you pass it in the function's argument, you're giving the memory address of the first element. 

If you will change the value of any element from that array inside the function, that **WILL** change the actual value, too. You don't need to pass it by reference.	

```
#include <iostream>
using namespace std;

void changeArr(int list[], int size){
	for(int i = 0; i < size; i++){
	    list[i] = 0;
	//or also *(list + i) = 0;
	//more on pointers in the OOP lesson
	}
}

int main()
{
    int arr[5]{1,2,3,4,5};
    
    changeArr(arr, 5);
    
    for(auto x : arr)
       cout << x << " ";   //will output 0 0 0 0 0
	cout << endl;
}
```

If you don't want to use the array, and just make it read-only, you can put it  as a **const** parameter.
```
void changeArr(const int list[], int size){
```
