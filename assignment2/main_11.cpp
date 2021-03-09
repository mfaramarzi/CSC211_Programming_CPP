/*
Write a program that reads a single character 'A' <= ch <= 'Z' as input and prints out a pyramid of characters starting at A until it reaches the pyramid's base and stops.
See examples below for input values of ch = 'A' and ch = 'C' respectively.
*/

#include<iostream>
#include<cmath>

 void lat_char(int i);

int main(){

char ch;
int i, j, k;

std::cin >> ch;
if ((ch >= 65) && (ch <= 90)){


for (i = 65; i <= ch; i++){
    // 
    for(j = 0; j < (ch - i); j++){

        // SPACES 
        // every j will be space unless something else is defined

        std::cout << "  ";
    }
        lat_char(i);
    
    std::cout << std::endl;
}
}
}
// DEFINING A FUNC FOR CHAR
    void lat_char(int i){
        std::cout << "A";
        // for printing B
        for (int j = 66; j <= i; j++){

            std::cout << " ";
            std::cout << char(j);
        }
        for(int j = i - 1; j >= 65; j--){
            std::cout << " ";
            std::cout << char(j);

    }
    }




