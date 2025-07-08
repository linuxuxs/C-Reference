#include <iostream>
#include <fstream>
using namespace std;

int main(){

    int n, c, matrix[50][50];

    ifstream f;
    f.open("matriceDeAdiacenta.txt");
   
    f >> n;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++){
            f >> c;
            matrix[i][j] = c;
        }
    

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }
        
    cout << "\nMultimea x: ";
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << "\nLista muchiilor sau multimea U:\n{ ";
    //Pentru ca varfurile sunt adiacente,
    //si pentru a nu afisa aceasi muchie de doua ori,
    //bucla va parcurge pe deasupra diagonalei principale,
    //ignorand partea de jos.
    //(pentru ca sunt aceleasi muchii).
    for(int i = 1; i <= n - 1; i++)
        for(int j = i + 1; j <= n; j++)
            if(matrix[i][j] == 1)
                cout << "( " << i << ", " << j << " ) ";
        
    cout << " \nGradele nodurilor: \n";
    int grad, sumaGrade;

    for(int i = 1; i <= n; i++){
        grad = 0;

        for(int j = 1; j <= n; j++)
            grad = grad + matrix[i][j];
        
        sumaGrade += grad;
        cout << "d( " << i << " ) = " << grad << "\n";
    }
    
    cout << "Suma gradelor: " << sumaGrade;
}
