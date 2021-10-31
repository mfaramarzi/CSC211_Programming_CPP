/*
2. palindrome

Write a program that reads in a string of characters and prints out True if the string is palindrome and False, otherwise. A palindrome is a string that reads the same backward and forward.
 For example: Tacocat. Your program must not be case-sensitive. Length of the input string: 1 <= n <= 100.
*/
#include<iostream>

// declaring functions

unsigned int string_len(char str[]);
void palindrome(char str[]);

// main function

int main(){

char str[20];

// getting the input word

std::cin.getline(str, 20);



palindrome(str);

}

// defining functions


// palindrome function

void palindrome(char str[]){

// making the reverse name

    char new_str[20];

    int j = 0;

    for(int i = (string_len(str) -1) ; i >= 0; i--){

         new_str[j] = str[i]; //here str[i] is a character not a string.

         j++;
    }

// checking to be palindrome 

for (int i = 0; i <= string_len(str); i++){

    // if reach to the end of string "true"

     if(str[i] == '\0'){
        std::cout << "True";
        break;
    }

    // else if lowercase and the same letter
    else if (int ( str[i] ) >= 97  &&  int (str[i] ) <= 122 )  {

        if ( int ( str[i] ) == int (new_str[i]) || int (str[i]) == int (new_str[i]) + 32) {
            continue;
        }
        else{
                std::cout << "False";
                break;
            }
    }

    // else if uppercase and the same letter

        else if (int (str[i]) >= 65 && int (str[i]) <= 90 ){

            if ( int (str[i]) == int ( new_str[i] )  || int (str[i]) == int (new_str[i]) - 32 ){
                continue;
            }
            else{
                std::cout << "False";
                break;
            }
        }

    }
    }
    

// string_len function

unsigned int string_len(char str[]){

    unsigned int count(0);

    for(int i = 0; str[i] != '\0'; i++){

        count++;

    }

    return count;
}
