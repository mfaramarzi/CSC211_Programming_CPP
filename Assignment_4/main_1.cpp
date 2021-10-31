// ref: https://www.geeksforgeeks.org/check-if-given-sudoku-solution-is-valid-or-not/
#include<iostream>
#include<vector>
/*

I need backtracking recursion. Means Ineed for loop.
I need boolean func

I should go over rows and columns and check if there is a number more than one time repetition.

I should go over boxes and check if there is a number more than one time repetition.




*/

void sudo_row(int num , std::vector<std::vector<int> > vec);

void sudo_col(int num , std::vector<std::vector<int> > vec);

void sudo_block(int num , std::vector<std::vector<int> > vec);
// preconditrion: arguments are num: the number of cells in each row/col
// a vector of alternative numbers, including 1-9
// post condition: it will be a boolean func, so, true/false saying a given filled board is a good solution or not.

int main(){

int num = 9;

std::vector<std::vector<int> > vec;



int board[9][9] = {0};//never used! could be deleted!

int value;
//Fill Sudoku matrix
for(int i = 0; i < 9; i++){

std::vector<int> vec_temp;

for(int j = 0; j < 9; j++){

std::cin>>value;
vec_temp.push_back(value);


// std::cin >> board[i][j]; //those spots dont exist yet

}
vec.push_back(vec_temp);
}


//Print Sudoku matrix
// for(int i = 0; i < 9; i++){
// for(int j = 0; j < 9; j++){
// std::cout <<board[i][j];
// }
// std::cout << std::endl;
// }

// std::cout<< "max";
sudo_row(num , vec);

sudo_col (num , vec);

sudo_block (num , vec);

return 0;
}

void sudo_row(int num , std::vector<std::vector<int> > vec){


// going over all rows one by one
for (int i = 0 ; i < num ; i++){

    // going over all columns in each row

    for (int j = 0 ; j < num ; j++ ){

        int a_num =  vec[i][j];

        for (int k = j + 1 ; k < num ; k++){

            if (a_num == vec[i][k]){

                std::cout<< "Wrong solution!";

                exit(0);
            }
        }
    }
    }
    }

    
void sudo_col(int num , std::vector<std::vector<int> > vec){


// going over all columns one by one
for (int i = 0 ; i < num ; i++){

    // going over all rows in each column

    for (int j = 0 ; j < num ; j++ ){

        int a_num =  vec[j][i];

        for (int k = j + 1 ; k < num ; k++){

            if (a_num == vec[k][i]){ //here

                std::cout<< "Wrong solution!";

                exit(0);
            }
        }
    }
    }
    }

    void sudo_block(int num , std::vector<std::vector<int> > vec){

        // traverse over blocks

        for (int i =0 ; i < 9 ; i += 3){

            for (int j = 0 ; j < 9 ; j += 3){

                // traverse each bock
                // getting a number
                for (int k = i ; k < i + 3 ; k++){

                    for (int l = j  ; l < j + 3 ; l++){

                        // comparing that number with other cells

                            for ( int m = k + 1 ; m < i + 3 ; m++){ //k + 1

                                for (int n = l + 1; n < j + 3 ; n++){ //l + 1

                                        if (vec[k][l] == vec[m][n]){

                                            std::cout<< "Wrong solution!";

                                            exit(0);
                                        }

                                }

                                
                            }
                    }
                //
                }
            }
        }
        std::cout<< "Solution is good!";
    }

// a function to check all columns, the another to check all rows and the third func for blocks
// grabbing cell is equal to any num in the same row. next num, compare to the rest of num in the row
// for each block I need to go through each row and columns (3*3) . I will need 3-4 for loops.



// recursion



