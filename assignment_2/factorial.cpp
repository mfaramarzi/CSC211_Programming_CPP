// ???

/*
Write a program which reads in a single integer 0 <= n < 30 and prints out the factorial of n. 
Factorials get very big very quickly and can easily exceed the limits of a signed int that uses 4 bytes.
 If the value of factorial of n is too large to be stored in an int (>2,147,483,647), your program should print Can't handle this.
*/

/*
to calculate factorial
sum = 1
sum = sum * (num )
num = num -1
*/

#include<iostream>

int main(){
    int num, i;
    long int sum = 1;

    std::cin >> num;

    if (num >= 0 && num < 30){
        for (i = 1; i <= num; i++){

            // std::cout<< sum <<std::endl;
            if((sum * i) > 2147483647){ //sum * i will be stored in an int and it is overflowing
                sum = -1;
                break;
            }
            else{
                sum = sum * i;
        }         
} 
    if (sum == -1){

        std::cout<<"Can't handle this";
    }
    else{

        std::cout << sum;
    }
}

}