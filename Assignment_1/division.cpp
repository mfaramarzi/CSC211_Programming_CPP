/*
Division. Prompt the user for two integer numbers, then output the following string: <a> / <b> = <c>. 
Integer division can lose precision as we discussed in lab, but we won't worry about that here.
*/

#include<iostream>
int main(){

    int a, b, c;

    std::cin>> a;

    std::cin>> b;

    c = a / b;
    std::cout<< a << " " << '/' << " " << b << " " << '=' << " "<< c;
}