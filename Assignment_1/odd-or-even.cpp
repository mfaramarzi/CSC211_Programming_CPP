/*
Sometimes it will be useful to know whether a given number is odd or even. This program should read a single integer number from the user and print whether 
or not the provided number is even or odd. The output should be a single line formatted as follows: <number> is <odd|even> where number is replaced by the user input,
 and odd or even is printed depending on whether or not the number is odd or even. You are encouraged to use the ternary operator to complete this program.*/

#include<iostream>
int main(){

  // defining parameters
  int num;

  // reading a number
  std::cin >> num;

  // using ternary operator
  (num % 2 == 0) ? printf("%d is even", num)
                 : printf("%d is odd", num);

}