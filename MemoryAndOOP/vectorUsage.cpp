#include <iostream>
#include <vector>

static int s_AllocationCount {0};
static int s_CopyingCount {0};
static int s_MoveCount {0};

void* operator new(size_t size){
    std::cout << "Allocated " << size << " bytes.\n";
    s_AllocationCount++;
    return malloc(size);
}


struct Data {
    int Value = 0;

    Data() = default;
    Data (int i ) : Value(i){}

    Data(const Data &source)
        : Value {source.Value} {
        s_CopyingCount++;
        std::cout << "Copied\n";
    }
    Data(Data &&source)
        : Value {source.Value} {
        s_MoveCount++;
        std::cout << "Moved \n";
    }
};


static void printVector(const std::vector<Data>& v) {
    std::cout << "Size: " << v.size() << std::endl;

    if (v.empty())
            return ;

    std::cout << "Elements: { ";

    for (int i = 0; i < v.size(); i ++) {
        std::cout << v[i].Value;

        if (i < v.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << " }\n";
}


int main () {

    std::vector <Data> vector;  //this can store 0 elements
    /*when you want to push back elements, and you dont have the capacity to do so,
    the vector needs to expand, so it will grow in size by 50%.
    ex, if you have 2 elements, the vector will have 3 in size.
    if you have 10, you will have 50 in size.
    So, just set the size first for the vector.
    You can do by either specifying the size in () -> std::vector <int> vector (5);
    Or, vector.reserve(5); - Reserving 5 space memory. The capacity.

     * vector.resize(x) - this is different than reserve, it will set the number of
     * elements in the vector to x. So In our example vector.resize(5), we will have
     * 5 instances of Data in the vector, so if we try to push back vector.push_back(Data(i)); we
     * will actual add 5 more into the vector. So we will have a total of 10.
     * So in this case, we can change the push_back loop into: vector[i] = Data(i);
     */

    vector.reserve(5);

    for (int i = 0; i < 5; i++) {
        vector.emplace_back(i);
    }
    /*
     * We use emplace_back instead of push_back because:
     * -- push_back creates a temporary object
     * -- it copies it in the vector
     *
     * -- emplace_back DOESN'T wait for an object already created.
     * -- takes arguments for the object's constructor that will create in the future.
     * -- so in other words, it constructs directly in the vector using the constructor Data(int i)
     */

    printVector(vector);

    std::cout << s_AllocationCount << " allocations.\n";
    std::cout << s_CopyingCount << " copies.\n";
    std::cout << s_MoveCount << " moves.\n";

    std::cin.get();

}

/*
 * TIPS AB VECTOR:
 * -- Don't use vectors. Use them only when it makes sense. Use std::arr if you know the size.
 *      std::array<Data, 5> arr;
 * And in the loop that we set the values:
 *      for (int i = 0; i < 5; i++) {
 *          arr[i] = Data(i);   //0 allocations, because we know the size.
 *
 * ARRAY USES STACK ALLOCATION, VECTOR USES HEAP ALLOCATION.
 *
 * -- Avoid copies, avoid moves. Use emplace_back.
 */
