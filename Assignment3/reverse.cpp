/*
3. reverse

Write a program which reads in a string of characters and prints out the same characters in reverse order.
 For example, if the input is Alright, alright, alright, output must be thgirla ,thgirla ,thgirlA. 
Note that your program must be case sensitive. Length of the input string: 1 <= n <= 100.
*/
/*

*/

#include<iostream>

unsigned int string_len(char str[]);
void reverse(char str[]);

int main(){

char str[101];

std::cin.getline(str, 101);

reverse(str);

}

// Defining a function to reverse a string

void reverse(char str[]){

char new_str[101];

// append letters to new_str

int j = 0;

    int length;
    length = string_len(str);

    for(int i = length -1 ; i >= -1; i--){

        if (i >= 0){

            new_str[j] = str[i];
        }
        else{

           new_str[j] = '\0'; 
        }

        j++;   
}
std::cout << new_str;

}


// string_len function

unsigned int string_len(char str[]){

    unsigned int count(0);

    for(int i = 0; str[i] != '\0'; i++){

        count++;

    }

    return count;
}
