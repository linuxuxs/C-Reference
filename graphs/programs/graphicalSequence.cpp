#include <iostream>
#include <vector>

/*
Check if a given sequence of natural numbers is a graphical sequence, 
and if so, display the edges of a graph whose degree sequence matches the 
specified sequence.
*/


using namespace std;

void sortList(vector<int> &list);   //make a function to sort the sequence in a non-increasing order
bool checkIfGS(vector<int> list);   //check if the sequence is a graphical sequence (using the Havel-Hakimi algorithm)
void swap(int &x, int &y);    //function to swap the numbers 
bool checkIfEqual(const vector<int>&x);  //check if all elements are 0
void createEdges(vector<int> list);       //function to create edges of the graph matching the given degree sequence

int main(){

    vector<int> testCase1 {7, 3, 1, 2, 4, 1, 2, 3};
    vector<int> testCase2 {2, 2, 4, 1, 2, 1, 2};
    vector<int> testCase3 {5, 4, 2, 2, 1, 1, 0};
    vector<int> testCase4 {3, 3, 2, 2};

    if(checkIfGS(testCase4)){
        cout << "That is a graphical sequence!" << endl;
        createEdges(testCase4);
    } else{
        cout << "That is NOT a graphical sequence!" << endl;
    }

    
    return 0;
}

void sortList(vector<int>& list){   
    for(size_t i{0}; i < list.size() - 1; i++){
        for(size_t j{0}; j < list.size() - i - 1; j++){
            if(list[j] < list[j+1]){
                swap(list[j], list[j+1]);
            }
        }
    }
}

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

bool checkIfEqual(const vector<int> &x){
    for(size_t i{0}; i < x.size(); i++){
        if(x.at(i) != 0){
            return false;
        }
    }

    return true;
}

bool checkIfGS(vector<int> list){
    
    while (true){
        sortList(list);
        if(checkIfEqual(list)){
            return true;
        }
        for(auto x : list){
            if(x < 0){
                return false;
            }
        }

        size_t tmp = list[0];

        if (tmp > list.size()){
            return false;
        }
        list.erase(list.begin());
        
        for(size_t i{0}; i < tmp; i++){
            list.at(i) -= 1;
        }
    }
}


void createEdges(vector<int> list){
    vector<int> nodes (list.size());
    vector<vector<int>> edges;

    for(size_t i {0}; i < nodes.size(); i++){
        nodes.at(i) = i + 1;
    }
    
    
    while (true){

        sortList(list);
        if(checkIfEqual(list)){
            break;
        }
        
        int degree = list[0];
        int curr_node = nodes[0];

        if(degree >= static_cast<int>(list.size())){
            return;
        }

        for(int i {1}; i <= degree; i++){
           
            edges.push_back({curr_node, nodes.at(i)});
             list.at(i) -= 1;
        }

        nodes.erase(nodes.begin());
        list.erase(list.begin());

    }
    //print out the edges
    for (size_t i {0}; i < edges.size(); i++){
        cout << "( " << edges[i][0] << ", " << edges[i][1] << " )";
    }
}
