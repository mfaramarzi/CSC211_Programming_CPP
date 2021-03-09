/*
This program should prompt the user for three integer values, and determine which number is the smallest. 
The output string should be formatted as follows: The smallest number entered was <number>.
*/

#include<iostream>
int main(){

  // defining parameters
  int num1, num2, num3, min;

  // reading a number
  std::cin >> num1 >> num2 >> num3;

    if ((num1 <= num2) && (num1 <= num3)){
        printf("The smallest number entered was %d\n", num1);
    }

    else if ((num2 <= num1) && (num2 <= num3)){
        printf("The smallest number entered was %d\n", num2);
    }

    if ((num3 <= num1) && (num3 <= num2)){
        printf("The smallest number entered was %d\n", num3);
    }
}