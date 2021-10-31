/*
A perfect number is a number for which the sum of its proper divisors is exactly equal to the number.
 For example, the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.
 Write a program that reads in an integer 0 < x <= 10^4 and prints True if x is a perfect number and False otherwise.
*/

/*

for i in range 0 and num/2+1
    if num % i == 0
    sum += i

if sum ==num
    print True

else
    print False

*/


#include<iostream>
#include<cmath>

// Declaring function

void perfect(int num);

// Main function

int main(){

int num;

std::cin >> num;

perfect(num);

}


// Defining function

void perfect(int num){

int num_dig(0), sum(0);

int num2 = num;

while (num2 > 0){
    num_dig++;
    num2 /= 10;
    }  

for (int i = 1; i <= num/2; i++){

    if (num % i == 0)

    sum += i;
}
if (sum == num){

    std::cout << "True";
}
    
else{

    std::cout << "False";
}

}
    


