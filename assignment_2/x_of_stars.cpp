

/*
Write a program that reads an integer 0 < n < 2^32, returns the sum of all digits in n that are divisible by 2. 
For example, if n = 341238 the output would be 14, because it is the sum of 4 + 2 + 8. Hint: a signed int may not be enough.
*/

/*


for (i=0; i < n; i++)
    for(j=0; j < n , j++){
        if(i % 2==0){
            if(j%2==0){
                std::cout<<'*';
            else if (j%2 != 0){
                std::cout<<' ';
            }
            }
        }


    }

std::cout<< std::endl;

*/

#include<iostream>
#include<cmath>

int main(){

int num, i, j;

std::cin >> num;

if (num % 2 == 0){
    std::cout << "Sorry, not odd" << std::endl;
}
else{
    for (i=0; i < num ; i++){
        for(j=0 ; j < num ; j++){
            if((j == i) || (j == (num - i - 1))){
            std::cout<<'*';
                             }
            else if ((j < i) || (j < (num - i - 1))){
                std::cout<<' ';

            }
                       }
    std::cout<< std::endl;
    }

}
}
