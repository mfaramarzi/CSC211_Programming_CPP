/*
Finding the k neaest points to our point
finding the most repetition between R & B and choosing that as the winner.

*/

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

char knn (int n , int k, std::vector<std::vector<double>> vec , double x , double y);

int main(){

double value;

char char_label;

int int_label;

int n , k;

// getting n and k

std::cin>> n;

std::cin>> k;

// making a 2-d vec of all known points (x, y and int(label))

std::vector<std::vector<double>> vec;

for(int i = 0; i < n ; i++){//dimension of vector is n * 3

std::vector<double> vec_temp;

// making the 1-d vectors of known points including two integers and asci value of label

for(int j = 0; j < 2; j++){

std::cin>> value;

vec_temp.push_back(value); //vec_temp can only hold int
}

std::cin>> char_label;

int_label = int(char_label); //asci value of the labels 

vec_temp.push_back(int_label); //after converting char to int of its asci, we add it to the vec_temp in the i'th iteration of vec

vec.push_back(vec_temp); //pshing back the vec_temp to the vec in the i'th iteration
}

// std::cout<<vec.size()<<std::endl; //checking first and second dimension of vec std::cout<<vec[0].size()<<std::endl;

double x , y;

// after i iterations, getting x , y of the unknown point

std::cin>> x >> y;

std::cout<< knn(n , k , vec , x , y);

}




char knn (int n , int k, std::vector<std::vector<double>> vec , double x , double y){

// a vector for storing distance of x,y from each n points
std::vector<int> dist_vec(n); //we are assigning n memory cells to the dist_vec vector, then we will be able to assign values to those indecies

for (int i = 0 ; i < n ; i++){

    dist_vec[i] = sqrt ( pow ( x - vec[i][0] , 2 ) + pow ( y - vec[i][1] , 2 ) );//getting the first and second element of each row(3 elemets) and using in the equation

}

// finding indecies of k points with the minimum distance in the dist_vec
//we need to store three min values indecies in min_vec_index 


int index;

std::vector<int> min_vec_index(k) ; //determinimg the length of vector allows us to assign values to that

int i;

for (int j = 0 ; j < k ; j++){ //fining the min, k times, between the rermaining values

int min = dist_vec[0];//assuming the first distance as the minimnum

for ( i = 0 ; i < n ; i++){ //for all n values of dist_vec, check of they have the smaller distance 

    for (int a = 0; a < k; a++) // "min_vec_index.size()" is equal to k
    {
        if (i == min_vec_index[a]) { //if happens, try the next i, till finding an i not existing in min_vec_index

            i++;

            a = 0;
        }
    }

        if(dist_vec[i] <= min){

            min = dist_vec[i] ; 
            
            index = i;
            
        }
    }
}

min_vec_index.push_back (index); 

// now we need to get the label of those k numberof  x , y with the minimum distances

std::vector<char> char_vec(k); //vector of labels for k nearest points

for (int i = 0 ; i < k ; i++){

    char_vec.push_back(char(vec[i][2]));
}

int BLUE(0) , RED(0);

for (int i = 0 ; i < k ; i++){

    if (char_vec[i] == 'B') {

        BLUE++;
    }

    else{

        RED++;
    }
}

if (BLUE > RED){

    return 'B';
}
else {

    return 'R';
}
}







// or

// bool test(vec1, vec2)
// {
// for (a = 0; a < min_vec_index.size(); a++)
// {
//       if (i == min_vec_index[a]) return true
//  }  return false
// }