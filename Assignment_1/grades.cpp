/*
This program should prompt the user for a single character as an argument, this character should represent a letter grade. 
The program should print a single-line string for each different grade.
Additionally, the case of the letter should not matter. A, a, B, b, etc. should all be acceptable input for the program.
*/

#include<iostream>
int main(){

    char letter;


    std::cin >> letter;
 

    switch(letter){
        case 'a' :
        case 'A' :
            std::cout << "Excellent\n";
            break;

        case 'b': 
        case 'B':
            std::cout << "Good\n";
            break;

        case 'c': 
        case 'C':
            std::cout << "Average\n";
            break;

        case 'd':
        case 'D':
            std::cout << "Poor\n";
            break;

        case 'f': 
        case 'F':
            std::cout << "Failing\n";
            break; 

    }
}