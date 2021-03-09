#include<iostream>

void swap(int& a, int& b);

int main(){

int v = 0 , n = 32 ;
while (n > 1) {
n /= 2 ;
v ++;
}
std::cout<<v;
}
