

/*
Write a program which reads in an integer 0 < n <= 1,000,000,000 and prints True if the value is a prime number and False if it is not.
*/

/*
read the number
if it is between 0 and 1,000,000,000
    if it is prime print prime
    else print not prime

prime number

only divisible by 1 and itself
not divisible by any number between any number between 1 and num/2
if num % i is zero, break the loop and print false
else continue the loop to the end;
if it never breaks print true
*/

#include<iostream>

int main(){

int num, i;
std::cin >> num;

if (num > 0 && num < 1000000000){
    if (num == 3){
       std::cout << "True"; 
    }

    else if (num == 1){

    std::cout << "False";
}

    else if (num == 2){
        std::cout << "True"; 
        }
        
    else{

    for (i = 2; i <= num/2; i++){

        if (num % i == 0){

            std::cout << "False";
            break;
        }
        else if (i == num/2){
            std::cout << "True";
        }
    }
    }
}
   
}

