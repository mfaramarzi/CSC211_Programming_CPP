/*
6. str_hash

Write a program that reads a string as input and prints its hash value. 
The hash value for this problem is defined as the sum of all characters in the string, in fact, the sum of their ascii values. Length of the input string: 1 <= n <= 100.
*/
/*

*/

#include<iostream>

unsigned int string_len(char str[]);

int main(){

char str[101];

int sum(0);

std::cin.getline(str, 101);

for(int i = 0 ; i <string_len(str) ; i++){

    sum += int (str[i]);

}
std::cout<< sum;
}



// string_len function

unsigned int string_len(char str[]){

    unsigned int count(0);

    for(int i = 0; str[i] != '\0'; i++){

        count++;

    }

    return count;
}
