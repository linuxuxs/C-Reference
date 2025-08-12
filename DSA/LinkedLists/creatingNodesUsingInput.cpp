#include <iostream>
using namespace std;

/*Asking the user how many nodes to create, and assigning values.*/

struct node {

    int data;
    node* next;

};

void display();
void createNodes(int);

node* first_node = nullptr;

int main(){

    int num;

    cout << "------------------------------------------\n";
    cout << "Input the number of nodes : "; 
    cin >> num;

    createNodes(num);
    display();
    cout << "\n------------------------------------------\n";
    
}


void display(){

    cout << "\n\nThe list of the elements inside the Linked List: \n\n";

    node* curr_node = first_node;
    int i = 1;

    if(curr_node == nullptr){
        cout << "List is empty!\n";
    } else{
        cout << "     Nodes\t  Values\n------------------------------------------\n";
        while(curr_node != nullptr){
            cout << "Node number " << i++ << ":      ";
            cout << curr_node->data << "\n";
            curr_node = curr_node->next;
        }

    }

}

void createNodes(int x){

    int num;
    node* curr_node, *tmp_node;

    first_node = new node();

    if(first_node == nullptr){
        cout << "Error - Unable to allocate memory for the first node!\n";
    } else {

        
        cout << "Enter value for the first node: ";
        cin >> num;

        first_node->data = num; 
        first_node->next = nullptr;

        tmp_node = first_node;

        for(int i {2}; i <= x; i++){

            curr_node = new node();

            if(curr_node == nullptr){
                cout << "Error - Unable to create current node!\n";
                break;
            } else{

                cout << "Enter value for the number " << i << " node: ";
                cin >> num;

                curr_node->data = num;
                curr_node->next = nullptr;

                tmp_node->next = curr_node;
                tmp_node = tmp_node->next;
            }
        }
    }
}
