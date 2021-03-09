/*
Write a program which reads in an integer -15 < n < 15 and an integer 0 < k < 10 and prints the value of n to the power of k. 
Cannot use the built-in function pow.
*/

/*
multiple base by itself for power number of times
*/

#include<iostream>

int main(){

int base, power, i;
long int sum(1);

std::cin >> base >> power;

if (((base > -15) && (base < 15) && (base != 0)) && ((power > 0) && (power < 10) && (power != 0))){

    for (i = 0; i < power; i++){

        sum *= base;
         }}
else if (base == 0){

    sum = 0;
}
else if (power == 0){

    sum = 1;
}
    std::cout << sum;

   
}

