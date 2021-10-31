#include <iostream>

int main(){
    
    int board[9][9];
    
    //Fill Sudoku matrix
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            std::cin >> board[i][j];
        }
    }

    //Print Sudoku matrix
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
           std::cout <<board[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}