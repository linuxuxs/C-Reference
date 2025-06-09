#include <iostream>

/**
Se citeste un numar natural n cu cel mult 2 cifre.
 Afisati pe ecran o figura sub forma de romb formata 
 cu numerele naturale de la 1 la n, ca in exemplul 
 alaturat pentru n=6.
*/

int main(){

    int n{};
    std::cout << ">> ";
    std::cin >> n;

    //main for loop
    for ( int i {1}; i <= n; i++){

        //for loop pentru spatii
        for ( int j {1}; j <= n - i; j++ ){
            std::cout << " ";
        }
        //for loop pentru afisarea cifrelor
        for ( int j2 {1}; j2 <= 2 * i - 1; j2++ ){
            std::cout << i;
        }

        std::cout << "\n";
    }
    //for loop pentru afisarea partii inferioare a rombului
    for ( int i { n - 1}; i >= 1; i--){

        //for loop pentru spatii
        for ( int j {1}; j <= n - i; j++ ){
            std::cout << " ";
        }
      //for loop pentru afisarea cifrelor
        for ( int j2 {1}; j2 <= 2 * i - 1; j2++ ){
            std::cout << i;
        }

        std::cout << "\n";
    }

}
