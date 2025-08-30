#include <iostream>
#include <string>

int main() {
    std::string str {};
    int top {};
    std::cout << "Enter how many toppings of ice-cream you want (max is 3): \n>> ";
getInput:
    std::getline(std::cin, str);
    
    try{
        try{
            top = std::stoi(str);
        } catch(std::invalid_argument& e) {
            throw std::string("NaN");
        } catch(std::out_of_range& e){
            throw std::string("NaN");
        }
    } catch (std::string error){
        std::cout << "Error - " << error << ".\n" << str << " is not a valid number. Please try again.\n";
        goto getInput;
    }
    std::cout << "-----------------------------------------------\n";
    if(top <= 0) goto none;
    else if(top == 1) goto one;
    else if(top == 2) goto two;
    else goto three;
    
three:
    std::cout << "Giving you chocolate topping!\n";
two:
    std::cout << "Giving you vanilla topping!\n";
one:
    std::cout << "Giving you strawberry topping!\n";
    return 0;
none:
    std::cout << "No topings!\n";
    return 0;
    
}
