/*
Subtraction. Prompt the user for two numbers, then output the following string: <a> - <b> = <c> similar to problem 1 except using subtraction instead of addition.
*/

#include<iostream>
int main(){

    int a, b, c;
   
    std::cin>> a;

    std::cin>> b;

    c = a - b;
    std::cout<< a << " " << '-' << " " << b << " " << '=' << " "<< c;
}