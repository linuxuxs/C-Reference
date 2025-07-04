#include <iostream>
#include <string>
using namespace std;

class Player{
private:
    string name;
    int lvl;
    int health;
    int secretCode;
    double anotherCode;
public:
    Player(string n, int x, int y)
        : name{n}, lvl{x}, health{y} {
        cout << "New player created!\nName: " << 
        name << "\nLvl: " << lvl << "\nHealth: " << health << "\n";
    }
    Player(int x){
        cout << "Secret code: " << secretCode << endl;
        secretCode = x;
        cout << "Secret code new value: " << secretCode << endl;
    }
    Player(double x) 
        : anotherCode{x} {
            cout << "Another code: " << anotherCode << endl;
            anotherCode = x;
            cout << "Another code new value: " << anotherCode << endl;
        }
    ~Player(){
        if(name.empty()){
            cout << "No name has been destroyed." << endl;
        } else{
            cout << name << " has been destroyed." << endl;
        }
    }
};

int main(){

    Player player1{"Nico", 0, 100};
    Player enemy1{"Enemy", 31, 100};
    Player enemy2{"Enemy", 94, 82};
    Player enemy3{19};

    return 0;
}
