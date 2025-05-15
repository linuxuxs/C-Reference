#include <iostream>
using namespace std;
/*
Pointers - they are like variables that stores a memory address.
    This memory address holds a value. So like, think pointers like a nickname for
    the variable, but dont forget to dereference it if you do so! 
    See example at //1. 
    You can also allocate dynamic integers using pointers.
    After using a pointer, the best practice is to delete them.
    To do that, you can use the keyword 'delete' then specify the name of the pointer.
    See example at //3.
    int *pointer is how to create a pointer, dont forget the *!
    When you assign the memory address of the variable a to the pointer, dont forget to
    use the & (address-of operator)!
    Now, that pointer points to the memory address of that variable 10, so both the     
    pointer (points to the address) and the variable has the value 10!
    If you change the value via the dereferenced pointer or the original variable, it affects the same memory location.
    Also, if you wanna get the value of that memory address that the pointer points to,
    you need to DEREFERENCE the pointer, all you have to do is to use the dereference
    operator (*).
    See examples at //2.

    You can also access the value of memory address that the pointer points to by   
    two ways:
    -- subscript notation : arr_ptr[n];
    -- offset notation : *(arr_ptr+n);
    
Dynamic memory allocation - you can use dynamic allocation to store things in the heap,     this means it will be controlled via a pointer. 
    The memory will be dynamic, which mean it can grow/shrink in size, and this can be
    usefull in some cases when we dont know how big we want something to be.
    We can use the keyword new to allocate memory at run time.
    Lets take as an example an array of integers, and we dont know how many we will
    need directly - we can allocate a dynamic array in the heap!
    See example at //1.0
    The dynamic array has the size that the user enters.
    the only way to use that allocated array is via the pointer, so DONT lose it!
    After use, delete the pointer! 'delete [] ptr' - we use [] because its an array!
    The integers will be stored continously in the heap.
    The address of the first element will be stored in the name of the pointer.
    To access elements, you will need to dereference the pointer, and to do that
    with other places from the array, you can do smth like '*(ptr+2)', this means go 
    two integers away from the first element, and we also dereference, so we will 
    get the value that memory address holds. We put ptr+2 in paranthesies because of
    the precendece of the *, we want first to go 2 integers away, then dereference.
    See example at //2.0
    Also, pointer arthimetic is simple, js like we did ptr+2, or we can also use ++,
    --, ptr += n or even ptr = ptr + n.
    The incrementation works very simple, if the pointer points to an integer, then
    you increment it ++, it will add 4 (bytes) because an integer has 4 bytes, then
    it will point to the second integer!
    Plus: When you compare 2 pointers, they arent compared by the value, but rather
    by the memory address they both hold, so if they have the same address, and you
    compare ptr1 == ptr2, you will get true.
    If you really wanna compare the data they hold, just dereference them then do it. 
*/

int main(){
    int a{10};


    //1
    int *pointer;
    pointer = &a;

    //2 
    a = 10;
    
    cout << a << endl;
    cout << *pointer << endl;

    *pointer = 0;

    cout << a << endl;
    cout << *pointer << endl;
    
    //3
    int *ptr_int = new int(5);
    cout << ptr_int << endl;    
    cout << *ptr_int << endl;
    delete ptr_int;
    

    int size{};
    //1.0
    cout << "Enter how many ints you want: " << endl;
    cin >> size;
    int *ptr = new int[size];
     
    //2.0
    
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << *(ptr+2) << endl;
    cout << ptr+3 << endl;    
    cout << ptr++ << endl;
    cout << ptr << endl;
    //important! remember to come back to its original 
    //address, we incremented the pointer, now it points to the second
    //integer from the array, and if we want to delete it, 
    //it wont work!
    ptr--;

    *ptr = 1;
    *(ptr+1) = 2;
    *(ptr+2) = 3;
    cout << *ptr << endl;
    cout << *(ptr+1) << endl;
    cout << *(ptr+2) << endl;

    delete[] ptr;


    return 0;
}
