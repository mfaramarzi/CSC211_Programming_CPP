/*
Write a program which reads a single integer 0 < n < 20 as input and prints out a left-justified triangle.
*/
/*
sudo:
read a number between 0 and 20
if 0< num > 20:
    for i in range number:
        for (j=0, j < i, j++1)
            print(*)

*/
#include<iostream>

int main(){
    int num, i, j;

    std::cin >> num;

    if (num > 0 && num < 20){
            for (i = 0; i < num ; i++){
                for (j=0; j <= i; j++){
                        std::cout << '*';

                }
            std::cout <<std::endl;
            } 

    }

}