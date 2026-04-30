// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum asset_type {texture, sound, animation, script}; //they are assigned a sequential integer value starting at zero. (same values as indexed) texture = 0, sound = 1, animation = 2, script = 3

int main(){
    int asset_value; // declare integer variable

    asset_value = sound; // assign the value sound to it, therefore asset_value =1

    std::cout << "asset_value = " << asset_value << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
