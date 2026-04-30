// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a,b = 5; // same level of indentation as main function == means that a and b are global variables == accessable to all parts of the code
// you can declare variables inside functions which limits their scopes with curly brackets
//automatic/local variables == managed by the compiler and allocated in the stack segment of memory>> temporary

int main(){
    bool my_flag;
    a = 7;
    my_flag = false; //false is encoded as 0 in C++
    std::cout<<"a = " << a << std::endl;
    std::cout<<"b = " << b << std::endl;
    std::cout<<"flag = " << my_flag << std::endl;
    my_flag = true; //1 is a valid true value in C++
    std::cout<<"flag = " << my_flag << std::endl;
    std::cout<<"a + b = " << a+b << std::endl;
    std::cout<<"b - a = " << b - a << std::endl;
    unsigned int positive;
    positive = b - a;
    std::cout << "b-a (unsigned) "<< positive << std::endl; //two's complement representation of -2 in binary

    std::cout << std::endl << std::endl;
    return 0;
}
