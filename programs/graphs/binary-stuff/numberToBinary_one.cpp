#include <iostream>
#include <vector>

/*
------ C++ converter from decimal to binary ------

This is a simple converter i made - it can convert numbers to binary up to 8 bits.
---Anything above 255 wont work.

The algorithm is simple: it checks if the number you want to convert to
binary can be subtracted by each value from a vector of powers of two (0 to 128).
--If it can, it subtracts that value and pushes in the output vector a 1
--If it cant, it pushes in the output vector a 0, and then moves to the next value.

Its not an efficient one, because the number can only be 1 byte in size.
*/

std::vector<int> convert(int x)
{
    std::vector<int> list{128, 64, 32, 16, 8, 4, 2, 1};
    std::vector<int> output;

    for(int i {0}; i <= 7; i++){
        if(x >= list.at(i)){
            x -= list.at(i);
            output.push_back(1);
        } else {
            output.push_back(0);
        }
    }
   return output;
}

int main(){
    unsigned int num{};
    

    std::cout << "Enter the number you wanna convert to binary! (between 0-255)\n--> ";
    while(!(std::cin >> num) || num > 255){
        std::cout << "This converter only expects numbers between 0-255!\n";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "--> ";
    }

    std::vector<int> converted = convert(num);

    std::cout << "The number " << num << " in binary: " << std::endl;
    for(const auto &x : converted){
        std::cout << x;
    }
    std::cout << std::endl;

    return 0;
}
