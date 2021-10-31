/*
Write a program which will read in a sequence of integers. The first two values (x y) represent the starting location of a knight piece on a chess board, 
considering the coordinate system displayed in the figure below. 
The succeeding numbers represent consecutive moves for the knight. Knight moves are encoded as numbers between 0 and 7 inclusive, as shown in the figure.

Your program should continuously track the location of the knight after each move until there are no more moves to read. 
Your program should then print out the final location of the knight in the format <x> <y>. 
If at any point during runtime, the knight is told to move off of the board, your program should print Invalid sequence and terminate.

For example, if the input is 5 5 0 3 5 6, your program would output 3 7. If the input is 5 5 1 2 0 5 4 it would output Invalid sequence, because move 0 would not be possible.
*/

/*
SUDO

*/


#include<iostream>
#include<cmath>

// Declaring function



// Main function

int main(){
int x, y, pos, error(0);

std::cin >> x >> y;

while (std::cin >> pos){

    int h, v;

    switch(pos){

        case 0:

            h = 2;
            v = 1;
            break;

        case 1:

            h = 2;
            v = -1;
            break;

        case 2:

            h = 1;
            v = -2;
            break;

        case 3:

            h = -1;
            v = -2;
            break;

        case 4:

            h = -2;
            v = -1;
            break;

        case 5:

            h = -2;
            v = 1;
            break;

        case 6:

            h = -1;
            v = 2;
            break;

        case 7:

            h = 1;
            v = 2;
            break;

        }

    x = x + h;

    y = y + v;

    if (x < 1 || x > 8 || y < 1 || y > 8){
        error++;
    }  
    
}

if (error > 0){

    std::cout << "Invalid sequence";
}

else{

    std::cout << x << ' '<< y;
}
}


