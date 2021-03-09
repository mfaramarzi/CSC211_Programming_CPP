/*
Addition. This program should prompt the user for two numbers, then output the following string: 
<a> + <b> = <c> where a is the first number given, b is the second, and c is the sum. (eg. 5 + 7 = 12).
*/

#include<iostream>
int main(){

    int a, b, c;

    std::cin>> a;

    std::cin>> b;

    c = a + b;
    std::cout<< a << " " << '+' << " " << b << " " << '=' << " "<< c;
}