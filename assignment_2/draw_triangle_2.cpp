/*
Write a program which reads a single integer 0 < n < 20 as input and prints out a right-justified triangle.
*/
/*
sudo:
read a number between 0 and 20
if 0< num > 20:
    for i in range number:
        print ' ' for (num - i) times and * for i times

*/
#include<iostream>

int main(){
    int num, i, j;

    std::cin >> num;

    if (num > 0 && num < 20){
            for (i = 0; i < num ; i++){
                for (j = 0; j < (num - i - 1); j++){

                    std::cout <<' ';
                }
                for (j = 0; j < i+1; j++){
                    std::cout << '*';
                }
               std::cout << std::endl;             
            }
} 
}

