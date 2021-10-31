/*
 Prompt the user for an integer number. If the last digit of the entered number is 9, print <number> is good, otherwise, print <number> is no good. 
 Some examples of "good" numbers would be: 9, 19, 1279, 999, 699, 1029 etc.
*/

#include<iostream>
int main(){

    int num;

    std::cin >> num;

    if (num % 10 == 9 || num % 10 == -9 ){
        std::cout << num << " is good\n";

    }
        

    else{
        std::cout << num << " is no good\n";

    }
        
    

}