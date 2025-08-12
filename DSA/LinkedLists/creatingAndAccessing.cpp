#include <iostream>
using namespace std;

/**
 * Creating nodes and accessing their data.
 */

struct node
{
    int data;
    node* next;

};

int main(){

    
    node* first = new node();
    node *second = new node();
    node* third = new node();


    first->data = 10;
    second->data = 20;
    third->data = 30;



    first->next = second;
    second->next = third;
    third->next = nullptr;


    node* curr = first;

    while(curr != nullptr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
