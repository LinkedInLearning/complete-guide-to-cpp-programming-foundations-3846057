
#include <iostream>

// Funcrion declaration
/* Hej i funktionen*/
/** 
 * såhär gör man
 * 
 * 
 */
// <!-- hej --> mest html
int add(int a, int b){
    return a + b; // Return the sum of a and b
}

int main(){
    int result = add(5, 3); // Function call with arguments 5 and 3
    std::cout << "The sum is:" << result << std::endl;
    return 0;
}

// funktion med Return value
/* int doubelNumber (in num){
       return num * 2;
  }
  denna typ av funktion får Rutern value multipliserad num med 2
 */

// funktion med ingen return value
/* void printMassage(){
        std::cout << "Welcome to the game!" << std::endl;
  }
  denna typ av funktion får ingen Return value för den har inga parametra
 */

// multi line comment är ( /** */ )

// {} är för början och slutet för funktionen också använda för att göra en limit för koden och statements som if else och loops

// Compiler är # i början av koden för att berätta om vad för operations vi vill utföra

// main är alltid början av kod och är en funktion som en punkt att börja på

// int är en retun typ och menas med att funktionen kommer att lämna tillbaka en integer value ex int main

// () är bodyn för funktionen där programets funktion utförs

// << operation är kallad insertion operation använd för att skicka data till en output som t.ex visas på en skärm

// >> operations är kallad för extraction operation och används för att få in data från en input t.ex ett tagentbord

// ; alla statements slutas med en (;) stetments börja på undre raden efter ({)

//Satements and Expressions
/** Statemant är en enhet av kod som utför handling med en semicolon (;) som säger till compilern att Statement är klar
 * Expression är en kombination av constants, variables, och operators som return values kan också användas till mer complexa kombinationer som multi operations och varibales 
 *  int main(){
 *      int a = 5;     // Declartion statement
 *      int b = 3;     // Declartion statement
 *      int c = a + b; // Declartion statement with an expression
 * 
 *      if (c > 5) {   // Conditional statement with an exprassion
 *          std::cout << "c is greater than 5";   // Output statement
 *      }
 * 
 *      return 0;      // Return statement
 * }
 */
/** Identifiers
 *  är namn för variablar, funktioner, types, classes, etc
 *  dom är även begränsade med bokstäver, nummer och underscores
 *  kan ej vara samma som vilken resaverad ord i språket
 *  
 *  Valid Characters
 *  ord från (a-z, A-Z) men inga speciela chraktärer
 *  nummer från (0-9)
 *  kan också ha Underscore (_)
 *  Identifiers kan inte börja med ett nummer
 *  Exempel: player_sprite_2, playerSprite2
 
 *  C++ Keywords
 *  kan inte matcha med några av språkets resaverad ord eller keywords som int, float, double, char, bool, if, else, switch, case, default, for, while, do, return, void, class, struct, public, private,         protected, virtuel, nes, delete, const, static, namespace, using, try, catch, throw, nullptr är någr av dom för mer http://en.cppreference.com
 * 
 *  C++ Case-Sensitive
 *  speed är inte samma som SPEED alltså alla ord med små bokstäver inte samma som ord med alla stora bokstäver
 *  lives och Lives är 2 olika Identifiers pågrund av lite och stor bokstav
 *  samma som x och X
 *  kan vara begränsat till 32 characters ha Identifers korta
 * 
 *  Best Practices
 *  använd meningsfulla namn (Lives istället för my_int)
 *  missbruka inte case sensitivity kan blanda ihop dom lätt
 */
/** Modeling
 * En model är en presentation av verkligheten
 * Modeling är viktigt för objekt-orienterad programmering
 * vi model allt ex en person, bil eller djur
*/
/** Encapsulation
 *  Encapsulation behåller data och operations inom modelen
 * modelen måste bara innehålla info om sig själv
 *  operations most vara concises (ome ne funktion ska göra A och B så är det bara det den ska göra)
 */
/** Classes
 * C++ konstruktions model
 * Classes innehåller members av 2 typer: data och funktioner
 * fun fact en instance är class kallad som objekt
*/
/** Access Specifiers
 * Members är antigen public eller private
 * public Members har tillgång till vilken del som helst i koden inom classen
 * Private members har tillgång enbart inom class
 * Protected members har tillgång till ärvd class
 */
/**  */

 #include <iostream>

 int main(){
    std::cout << "Hi There!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
 }

 #include <iostream>

 int main(){
    int age;
    std::cout <<"Enter your age: ";
    std::cin >> age;
    std::cout << "you are " << age << " years old." << std::endl;
    return 0;
 }

 /** C++ Standard Template Library and Headers
  * Containers: är ex std::vector, std::list och std::map.
  * Algorithms FUnctions är av sortering, sökning och manipulering av data
  * Iterators: objekt som tillåter dig korsa containers
  *  
  *  Headers
  * <vector> Definierar vektorn container class, del av STL
  * <algorithm>: tilldela stor del av algrorithms för sortering, söknin och maniplation av data
  * <memory>: inkludera smarta pointers som shared_ptr och unique_ptr
  * <fstream>: inkludera file stream classes för fil input och output
  * <locale>: tilldela lokilaserings funktioner
  * <thread>: inkludera classes och functions för skapning och managing threads.
  * <mutex>: erbjuder mutual exclusion primitiver för thread synkronisering
  */



 