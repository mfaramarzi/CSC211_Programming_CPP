/*
8. unique

Write a program that reads a string of characters and prints out the number of unique characters in the array. 
For example if the input is CSC 211 c++, the output should be 7, as there are 7 unique characters CS 21c+. Length of the input string: 1 <= n <= 100.
*/
/*

*/

#include<iostream>

unsigned int string_len(char str[]);

int main(){

char str[101];

// char new_str[101];

std::cin.getline(str , 101);

for (int i = 0 ; i < string_len(str) ; i++){

    for (int j = i + 1 ; j < string_len(str) ; j++){

        if (str[i] == str[j]){

        int k;
        
            for (k = j ; str[k] == str[j] ; k++){
        
    }
            str[j] = str[k];
        }
    }
}
std::cout << string_len(str);
}

// string_len function

unsigned int string_len(char str[]){

    unsigned int count(0);

    for(int i = 0; str[i] != '\0'; i++){

        count++;

    }

    return count;
}