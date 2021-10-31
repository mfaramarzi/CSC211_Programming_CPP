/*
7. diameter
Write a program that reads a sequence 2D points, and calculates the diameter, which is the largest euclidean distance between any pair of such points.
 The input will be a sequence of x1 y1 x2 y2 ... xn yn integer values, and the output must be an integer representing the floor of the diameter. 
The number of 2D points in the sequence can be anything between 1 and 100 (inclusive).
*/
/*

*/

#include<iostream>
#include<cmath>

int number_used; //defining number_used as a global variable, to be used in the finction declaration as well

int fill_array (int arr[][2], int size, int& number_used);

int euclidean_dis(int arr[][2], int size, int number_used);

int max_dia(int arr[][], int number_used); //arguments in the [] should be a constant!

int max_size = 100;

// main function

int main(){




int array[max_size][2];


 fill_array (array, max_size, number_used);

 euclidean_dis( array, max_size, number_used);

 std::cout<< max_dia( , number_used);


}

// defining a function to fill the array

int fill_array (int arr[][2], int size, int& number_used){

    int index(0), x , y ;

    for (int i = 0 ; i < number_used ; i++){

        std::cin >> x >> y;

        arr[i][0] = x;

        arr[i][1] = y;

        index++;

        number_used = index;
    }
    }

    // defining a function to make the euclidean distances array

    int euclidean_dis(int arr[][2], int size, int number_used){

        int euc_arr[number_used][number_used];

        for (int i = 0 ; i < number_used ; i++){

            for(int j = 0 ; j < number_used; j++){

                if (j != i){

                   euc_arr[i][j] = sqrt( pow ( ( arr[i][0] - arr[j][0] ) , 2) + pow ( ( arr[i][1] - arr[j][1] ) , 2));

                }
                else{
                  euc_arr[i][j] = 0;  
                }
            }
        }
        // return euc_arr;
    }

// defining a function to find the maximum euclidean distance


int max_dia(int arr[][number_used], int number_used){

int max(0);

for ( int i = 0 ; i  < number_used ; i++ ){

    for ( int j = 0 ; j < ( number_used) ; j++ ){

        if ( euclidean_dis[i][j] > max ){

            max = euclidean_dis[i][j];
        }
    }
}

return max;
}