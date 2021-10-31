/*
Prompt the user for three decimal values and print the average of the three in the format: The average of <num1>, <num2>, and <num3> is <average>.
*/

#include<iostream>
#include <iomanip>

int main(){

  // defining parameters
  double num1, num2, num3, average;

  // reading a number
  std::cin >> num1 >> num2 >> num3;

  average = (num1 + num2 + num3)/3;

  std::cout << std::fixed;
  std::cout << std::setprecision(4);

  std::cout <<"The average of " << num1 << ", " << num2 << ", and " << num3 << " is ";
  std::cout <<average;

}