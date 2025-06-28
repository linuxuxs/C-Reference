#include <iostream>
using namespace std;

/** Pointers to Pointers

-- Stores the memory address of a pointer. 
-- The type needs to be the same as the pointer and as the variable.
-- You can create as many pointers to pointers as you need.

*/

int main(int argc, char** argv) {
   
   const char endTerminator = '\0';
   
   if(argc < 2){
       cerr << "Error: No arguments on cmd line\n";
       return 1;
   } else {
       for(int i {0}; i < argc; i++){
           while(*(argv[i]) != endTerminator){
               cout << *(argv[i]);
               argv[i]++;
           }
           cout << "\n";
       }
   }
   return 0;
   
}

/*
-   cerr - character error (found in the iostream library), doesn't have a buffer, so it's
    shown without any delay. Used in error printing.
-   argv[i] - gives a pointer to the first character of the i-th argument. 
-   *(argv[i]) - dereferences that pointer (gives character at that position).
-   argv[i]++ - increments the pointer from the i-th argument, giving the next character.
*/

