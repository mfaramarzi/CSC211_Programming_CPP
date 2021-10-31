/*
Write a program which reads in three integers r, g, b representing RGB values ranging from 0 to 255 (inclusive) and prints out their hexadecimal representation. 
For example, if the input is 245 13 0 the output would be #F50D00.
*/

/*
SUDO

*/

#include<iostream>
#include<cmath>

void conv(int num);


int main(){

// declare integers

int r, g, b;

// read integers

std::cin >> r >> g >> b; 
// >> g >> b;

// convert decimal to hexa decimal
std::cout << '#'; 
conv (r);
conv (g);
conv (b);

}

void conv(int num){

int fir, sec;
char fir_char, sec_char;

// converting the first digit

fir = num % 16;

switch (fir){
    case 0:
        fir_char = '0';
        break;
    case 1:
        fir_char = '1';
        break;
    case 2:
        fir_char = '2';
        break;
    case 3:
        fir_char = '3';
        break;
    case 4:
        fir_char = '4';
        break;
    case 5:
        fir_char = '5';
        break;
    case 6:
        fir_char = '6';
        break;
    case 7:
        fir_char = '7';
        break;
    case 8:
        fir_char = '8';
        break;
    case 9:
        fir_char = '9';
        break;
     
    case 10:
        fir_char = 'A';
        break;

    case 11:
        fir_char = 'B';
        break;
    case 12:
        fir_char = 'C';
        break;

    case 13:
        fir_char = 'D';
        break;

    case 14:
        fir_char = 'E';
        break;

    case 15:
        fir_char = 'F';
        break;

    default:
        fir_char = '?';
        break;
}
// converting the second digit

sec =  num / 16;

switch (sec){
    case 0:
        sec_char = '0';
        break;
    case 1:
        sec_char = '1';
        break;
    case 2:
        sec_char = '2';
        break;
    case 3:
        sec_char = '3';
        break;
    case 4:
        sec_char = '4';
        break;
    case 5:
        sec_char = '5';
        break;
    case 6:
        sec_char = '6';
        break;
    case 7:
        sec_char = '7';
        break;
    case 8:
        sec_char = '8';
        break;
    case 9:
        sec_char = '9';
        break;
     
    case 10:
        sec_char = 'A';
        break;

    case 11:
        sec_char = 'B';
        break;
    case 12:
        sec_char = 'C';
        break;

    case 13:
        sec_char = 'D';
        break;

    case 14:
        sec_char = 'E';
        break;

    case 15:
        sec_char = 'F';
        break;

    default:
        sec_char = '?';
        break;
}
std::cout <<sec_char <<fir_char;
}