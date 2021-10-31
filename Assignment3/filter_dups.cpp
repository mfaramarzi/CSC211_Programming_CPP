/* 
5. filter_dups
Write a program that reads an input string and removes all its consecutive duplicates. 
For example, if the input string is Trrryyyyy Agaiinnnn, the output should be Try Again. Your program must be case-sensitive. Length of the input string: 1 <= n <= 100.
*/
/*
how can i test it with python tutor?
*/

#include<iostream>

#include<string>

int main(){

std::string str;

getline(std::cin , str );

for (int i = 0; i < str.length(); i++){

    if ( str [i] == str [i + 1]){

        str.erase(i + 1 , 1);

        i -= 1;
      }

}
std::cout << str;
}
