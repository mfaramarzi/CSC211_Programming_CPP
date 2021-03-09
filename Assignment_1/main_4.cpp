/*
All. Making individual programs to perform basic operations is repetitive and not good coding practice, 
it would be better to create one program which can add, subtract, divide, and multiply two numbers depending on user input. 
For this program you will read two integers a and b from the user and an operator character c.
 Eg. 2 5 * will multiply a and b and output the string 2 * 5 = 10, 5 2 / will divide a by b and output the string 5 / 2 = 2. 
Don't worry about validating input, the auto-grader will only give you legal numbers and one of the four basic operator characters + - * /.
*/

#include<iostream>
int main(){

    int a, b, r;
    char c;

    std::cin>> a;

    std::cin>> b;

    std::cin>> c;    

    switch(c){
        case '+' :
            r = a + b;
            break;

        case '-' :
            r = a - b;
            break;

        case '*' :
            r = a * b;
            break;

        case '/' :
            r = a / b;
            break;

        default:
            std::cout << "It is an invalid operator.\n";

    }
    std::cout<< a << " " << c << " " << b << " " << '=' << " "<< r;
}