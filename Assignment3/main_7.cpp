// what is echo "0 1 0 3 0 5" | ./main_7_1

#include<iostream>
#include<cmath>

int main(){


    const int max_size = 200;

    int arr[max_size];

    int cont = 0, indi_num;

    double max_dis = 0 , curr_dis = 0;


    while ( std::cin>> indi_num ){ //storre num in arr

        arr[cont] = indi_num;

        cont++;

    }

    int x1, x2, y1, y2;

    for (int i = 0 ; i < cont ; i += 2){ // geting the first pair
        
        x1 = arr[i];

        y1 = arr[i + 1];

        for (int j = i  ; j < cont ; j += 2){ //geting the next pair

            x2 = arr[j];

            y2 = arr [j + 1];

        curr_dis = sqrt( pow ( ( x1 - x2 ) , 2) + pow ( ( y1 - y2 ) , 2));

        if(curr_dis > max_dis){

            max_dis = curr_dis;
        }
        }

        

    }
std::cout<< floor(max_dis) << std::endl;//from the cmath library
}