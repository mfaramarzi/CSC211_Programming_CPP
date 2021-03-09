#include <iostream>
#include<cmath>

int main(){

int x, sum(0), i;

std::cin>> x;

for(i=0; i <= x; i++){

    sum = sum + 1/exp(2, i);

}

std::cout<<sum;
}
 