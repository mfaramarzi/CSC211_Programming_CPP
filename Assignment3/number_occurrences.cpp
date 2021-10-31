/*
1. count_first
Write a program which reads a sequence of 0 < n <= 100 integers as input and prints out the number of occurrences of the first integer in the entire sequence.
 For example, if the input is 7 1 3 6 7 -10 98 11 7, output should be 3 as 7 occurs 3 times.
*/
/*
read a sequence of numbers 
storing the first number in a variable
counting the number of times that number apears in the sequence
*/

#include<iostream>

int main(){

int num, count(1), first;

std::cin>> num;

first = num;

while(std::cin>> num){

    if (num == first){

        count++;
    }
}
std::cout<< count << std::endl;
}
