/*
Prompt the user for an integer value. 
If the number is both a multiple of 8 and is larger than 100, the single line <number> satisfies the criteria should be printed. 
If the number does not satisfy both criteria, print out <number> does not satisfy the criteria
*/

#include<iostream>
int main(){

    int num;

    std::cin >> num;

// using if-else statement
    if (num > 100 && num % 8 == 0){
        printf("%d satisfies the criteria\n", num);
}
    else{
        printf("%d does not satisfy the criteria\n", num);
    }

    

}