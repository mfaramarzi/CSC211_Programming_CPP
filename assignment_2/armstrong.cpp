/*
Write a program that reads in an integer 0 < n <= 10^9 as input and checks whether n is an armstrong number or not. 
An armstrong number is a number that is equal to the sum of its own digits raised to the power of the number of digits. 
For example 1634 is an armstrong number, since 1^4 + 6^4 + 3^4 + 4^4 = 1634. Your program will print True if n is an armstrong number, and False otherwise.
*/

/*
int a(0)
length num = 
for digits in num
    sum += pow (digit, length num)

if (sum == num){
    std::cout << "True";
}
else{
    std::cout<< "False";
}
}

*/


#include<iostream>
#include<cmath>

// Declaring function

void armstrong(int num);

// Main function

int main(){

int num;

std::cin >> num;

armstrong (num);
}


// Defining function

void armstrong(int num){

    int num_dig(0), sum(0);

    if (num > 0 && num <= pow(10, 9)){

        int num2 = num;
        while (num2 > 0){
            num_dig++;
            num2 /= 10;
        }
        

        int num3 = num;
        while (num3 > 0){
            int dig;
            dig = num3 % 10;
            sum += pow (dig, num_dig);
            num3 /= 10;
        }
        if (sum == num){
            std::cout << "True";
        }

        else{
            std::cout<< "False";
    }

    }
    }
