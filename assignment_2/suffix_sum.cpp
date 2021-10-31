

/*
Write a program which reads in two integers 1 <= n <= 10,000 and 1 <= s <= n and returns the sum of the last s elements in the sequence from 1 to n (inclusive). 
For example, if the input is 20 4 the output would be 74.
*/

/*
for i between 1 and s
for(j=0, j <=s, j++)
sum n + (n-1) + (n-2) + (n-s)

*/

#include<iostream>

int main(){
int n, s, sum(0), j;

std::cin >> n;

if ((n > 0) && (n <= 10000)){

    std::cin >> s;

    if(s >= 1 && s <=n){
        for(j = 0; j < s; j++){
            sum += (n-j);
        }
            

    }
}

std::cout << sum << std::endl;

}

