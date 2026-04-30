// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>
int main(){
    std::string name;
    std::cout << "Enter your name: " << std::flush; //flush makes sure that the output is completely sent to the terminal before waiting for the user input.
    std::cin >> name; //after running this line, the user input will be in name, cin only works for single words. name is the variable that recieves the input. std::cin >> is C++'s version of input().
    std::cout << "Nice to meet you, " << name << "!" <<std::endl; // this sequence works as a concatenation of all the elements involved.

    std::cout << std::endl << std::endl;
    return 0;
}