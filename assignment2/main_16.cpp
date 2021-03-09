/*
Write a program which reads in an integer 0 < n <= 10 prints out this nice rug pattern.
 See examples below for input values of n = 2, n = 3, and n = 4 respectively.
*/

/*
SUDO

we need to check all forms of sequences of numbers to see if all of those are prime or not.
write a function to count the number of digits

int dig_num(int num){


for (int count = 0; num > 0 ; count++ ){

    num /= 10

}

}


*/


#include<iostream>
#include<cmath>

// Declaring function
int conc (int num);
bool prime(int num);
int dig_num(int num);



// Main function

int main(){

int num, number_of_digits;
std::cin >> num;

if (num > 0 && num < 1000000000){

    number_of_digits = dig_num(num);

    int prim_count(0);

    for (int i = 0; i < number_of_digits; i++){

        if (prime(num)){
        prim_count++;
        }
        num = conc(num);
         }

        if (prim_count  == number_of_digits){

            std::cout << "True";
        }
        else{

            std::cout << "False";    
        }
        }
        }






// write a func to detache the last digit and concatinate it to the begining

int conc(int num){

    int last_digit, num_tenth, new_num, factor;

    last_digit = num % 10;

    num_tenth = num / 10;

    int i = 1;

    do
    {
        i = i * 10; 
    }
    while (i < num_tenth);
        
    factor = i;
        
    new_num = last_digit * factor + num_tenth;

    num = new_num;
   

    return(num);
    }


// checking if the number is prime

bool prime(int num){

int i;


    if (num == 3){
       return (true); 
    }

 for (int i = 2; i <= num/2; i++){

     if (num % i == 0){

          return (false);
         break;
     }
     else if (i == num/2){
         return (true);
     }
 }

}
// function to count the number of digits

int dig_num(int num){
int count;

for ( count = 0; num > 0 ; count++ ){

    num /= 10;

}
return(count);
}
