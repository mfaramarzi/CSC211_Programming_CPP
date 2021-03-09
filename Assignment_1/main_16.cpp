/*
This program should prompt the user for two arguments, first a decimal number and second, a single letter, either C or F.
 The decimal represents a temperature, the character represents which system that degree is in (50.0 F would be 50.0 degrees Fahrenheit etc.).
  This program should take the given number and convert it to a temperature in the other system. 
  The output string format should be <input num> degree(s) <input system> is equal to <new num> degree(s) <other system>.
   Eg. input 0 C would give the string 0.0000 degree(s) C is equal to 32.0000 degree(s) F.
 You can assume that either F or C will be given for input, no need to account for invalid input.
*/

#include<iostream>
#include <iomanip>

int main(){

    // defining parameters
    double num, cel, far;
    char unit;
    // reading a number
    std::cin >> num >> unit;
    std::cout << std::fixed;
    std::cout << std::setprecision(4);


    if (unit == 'C'){
        far = (num *9/5) + 32;
        std::cout << num <<" degree(s) C is equal to " << far << " degree(s) F\n";
    }

    else if (unit == 'F'){
        cel = (num - 32) * 5/9;
        std::cout << num <<" degree(s) F is equal to " << cel << " degree(s) C\n";

    }

    }