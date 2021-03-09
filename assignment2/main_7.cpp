

/*
Write a program that reads an integer 0 < n < 2^32, returns the sum of all digits in n that are divisible by 2. 
For example, if n = 341238 the output would be 14, because it is the sum of 4 + 2 + 8. Hint: a signed int may not be enough.
*/

/*

read a number 
if the number is between o and 2^32
for i in number
IF i % 2 =0
SUM += i

*/

#include<iostream>
#include<cmath>

int main(){

long int num, sum(0);

std::cin >> num;

if (num > 0 && num <pow(2, 32)){
    while(num > 0){
        if ((num % 10) % 2 == 0){
            sum+= (num % 10);
        }
        num /= 10;


    }
    std::cout << sum << std::endl;
}

}

