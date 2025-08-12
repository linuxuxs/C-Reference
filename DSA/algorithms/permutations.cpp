#include <iostream>
using namespace std;

/*
 * -------------------------------------------------
 * Create a program that outputs all the
 * permutations of a natural number n.
 * -------------------------------------------------
 *
 * The backtracking method is a very powerful
 * technique, but it uses a lot of memory -
 * and it's time complexity can be very large
 * in order to process the data.
 * 
 * This backtracking function only has one parameter
 * that keeps track of the position.
 * It works by:
 * -- giving a condition
 * -- then you verify if it's giving a valid solution
 * -- if not, backtrack ( backwards ) and try a different possibility.
 *
 * To keep track of what numbers has been used, I created
 * a helper array.
 */

//global variables
int n, arr[20], helper[20];

//function that outputs the array
void show();
//function to create the permutations of the number n
void backtracking(int k);

int main() {

    cout << "Enter a number: ";
    cin >> n;

    backtracking(1);


}


void show(){
    for ( int i {1}; i <= n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

void backtracking(int k) {
    for ( int i {1}; i <= n; ++i) {

        if (!helper[i]) {
            arr[k] = i;
            helper[i] = 1;

        if (k < n)
            backtracking(k + 1);
        else
            show();

        helper[i] = 0;
        }
    }
}
