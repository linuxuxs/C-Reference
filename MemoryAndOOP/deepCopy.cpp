#include <iostream>

using namespace std;

class Deep{
private:
    int *num;
public:
    Deep(int);
    Deep(const Deep &);    // copy constructor
    ~Deep(){ 
        delete num;
        cout << "Destructor called." << endl;
    }

    
    int get_val() { return *num;}
    void set_val(int x) {
        *num = x;
    }

};

Deep::Deep(const Deep& a)  
{    
    num = new int;
    *num = *a.num;
    cout << "Copy constructor called. Swallow copy" << endl;
}

Deep::Deep(int a){
    num = new int;
    *num = a; 
}

void show_swallow(Deep obj){
    cout << obj.get_val() << endl;
}

int main(){

    Deep enemy{10};
    show_swallow(enemy); //creates a copy of the object enemy

    Deep enemy1(enemy);
    enemy1.set_val(99);

    cout << "OBJ1 : " << enemy.get_val() << endl;
    cout << "OBJ2 : " << enemy1.get_val() << endl;

    return 0;
}
