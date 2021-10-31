/*
This program should prompt the user for an integer number and print whether the provided number is positive or negative.
 The output should be a single line formatted as follows: <number> is <positive|negative>. 
If the number is zero, the output string should instead print <number> is neither positive nor negative.
*/

#include<iostream>
int main(){

    int num;

    std::cin >> num;

// using ternary operator
    (num != 0) ? (num > 0 ? printf("%d is positive\n", num) : printf("%d is negative\n", num)) : printf("%d is neither positive nor negative\n", num);

}