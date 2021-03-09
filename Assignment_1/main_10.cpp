/*
Prompt the user for a digit [0, 9] and print out the name of that digit as a string. Entering 9 should output Nine, entering 7 should output Seven etc. 
An number outside of the specified range should print Not a valid number. Use a switch statement for this problem.
*/

#include<iostream>
int main(){

    int num;

    std::cin>> num;
  

    switch(num){
        case 0 :
            std::cout << "Zero\n";
            break;

        case 1 :
            std::cout << "One\n";
            break;

        case 2 :
            std::cout << "Two\n";
            break;

        case 3 :
            std::cout << "Three\n";
            break;

        case 4 :
            std::cout << "Four\n";
            break;

        case 5 :
            std::cout << "Five\n";
            break;


        case 6 :
            std::cout << "Six\n";
            break;

        case 7 :
            std::cout << "Seven\n";
            break;

        case 8 :
            std::cout << "Eight\n";
            break;

        case 9 :
            std::cout << "Nine\n";
            break;

        default :
            std::cout << "Not a valid number\n";
        

    }
}