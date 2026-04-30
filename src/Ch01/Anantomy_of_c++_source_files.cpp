#include <iostream> //
int main(){
    std::cout << "Hi There!" << std::endl;

    std::cout << std::endl << std::endl; 
    return 0;
}

// #include is the compiler directive: directives always start with a # and tell the compiler about operations we want it to perform on the source code. In this case we want the compiler to include the code of the header file iostream.
// iostream header file is a library that contains objects and functions that will allow us to print data to the screen and read data from the keyboard

// Functions are defined woth a return type, name, and parameters
// LINE 3: function name = main(); return type = int. 
    //Every C++ program must have a main function, because it is the starting point of the program. The word int is the return type, and it means that the function will return an integer value. >> requirement for main function
    // code inside curly brackets following main: is the body of the function where the program's instructions are executed.
    // curly brackets act as markers for the beginning and end of the function. They are also used to delimit blocks of codein statements like if,else and loops
//LINE 4: ALL STATEMENTS IN C++ END IN A SEMI-COLON(;)
    // std::cout == send the string("Hi There") to the standard output.
    // << == used to direct the string to std::cout
    // std::endl == is used to insert a new line character and flush the output buffer (like hitting enter on the terminal) 
//LINE 6: std::cout is directing std::endl twice to insert new line characters, creating a blank line
//LINE 7: returns 0 statement ends the main function 
    // returning 0 typically implies that the program has executed successfully.
    // non-zero values are usually used to identify an error.

#include <cstdio>

int main(){
    printf("hey There!\n");
    return 0;
}
//How we call functions in C and C++: name of the function followed by a list of arguments between parentheses. In this case we have called the printf function, sending one single argument == string enclosed by double quotes

#include <iostream>

int main(int argc, char* argv[]){
    std::cout <<"Hi There!" << std::endl;
    return 0;
}
// LINE 3: we defined the main function but this time it takes two arguments (int argc and char* argv[]) 
    // argc is an integer that represents the number of command line arguments passed to the program 
    // argv is an array of C-style strings representing those arguments.
    // The command line interface eill write into these arguments according to the arguments you type in the command line after the executable name. 

#include <iostream>
//Function declaration >> This defines the add function first, so that by the time main() runs and calls it, C++ already "Knows" it exists.
int add(int a, int b){
    return a+b; //Return the sum of a and b
}
//main() is special == its always where the program starts running , regardless of where it appears in the file.
int main(){
    int result = add(5,3); // Function calls add with arguments 5 and 3, and stroes it in result
    std:: cout << "The sum is: " << result << std::endl; // prints "the sum is" and result.
    return 0;
}
//int add(int a, int b) == is a function that takes two integer parameters, a and b.
//The <return> statement returns the sum of a and b.
// The function <add> is called from main with arguments 5 and 3.
// The result of the addition is stored in the variable <result> and printed to the terminal.
// Parameters act as placeholders for the values the function will operate on. In int add(int a, int b), a and b are parameters.
// Arguments are the values you provide when calling the function. In add(5,3), 5 and 3 are arguments.
//The return type  of a function specifies the type of value it will return. If a functiondoes not return a value, it return type is <void>. You can return a value from a function using the <return> statement.

//Example:

int doubleNumber(int num){
    return num*2;
}
//In this example, doubleNumber returns the result of multiplying num by 2.