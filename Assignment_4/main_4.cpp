/*
Finding the k neaest points to our point
finding the most repetition between R & B and choosing that as the winner.

*/

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<utility>



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

// knn(n , k , vec , x , y);

std::cout<< knn(n , k , vec , x , y);

}




char knn (int n , int k, std::vector<std::vector<double>> vec , double x , double y){

// a vector for storing distance of x,y from each n points
std::vector<double> dist_vec(n); //we are assigning n memory cells to the dist_vec vector, then we will be able to assign values to those indecies

for (int i = 0 ; i < n ; i++){

    dist_vec[i] = sqrt ( pow ( x - vec[i][0] , 2 ) + pow ( y - vec[i][1] , 2 ) );//getting the first and second element of each row(3 elemets) and using in the equation

}


// for (int i = 0 ; i < n ; i++){

//         std::cout<< dist_vec[i]<<std::endl;
//     }


int index;

std::vector<int> min_vec_index(k) ; //determinimg the length of vector allows us to assign values to that

//??????????????

// Vector to store element
    // with respective present index
    std::vector< std::pair <double, int> > vp;
  
    // Inserting element in pair vector
    // to keep track of previous indexes
    for (int i = 0; i < n; ++i) {
        vp.push_back(std::make_pair(dist_vec[i] , i));
    }
  
    // Sorting pair vector
    sort(vp.begin(), vp.end());


//maKING LIST OF INDECIES OF MINIMUmS
    for (int i = 0 ; i < k ; i++){

        min_vec_index[i] = vp[i].second;
    }

// for (int i = 0 ; i < k ; i++){

//         std::cout<< min_vec_index[i]<<std::endl;
//     }

// now we need to get the label of those k numberof  x , y with the minimum distances

std::vector<char> char_vec(k); //vector of labels for k nearest points

for (int i = 0 ; i < k ; i++){

    char_vec[i] = char(vec[min_vec_index[i]][2]);
}

// for (int i = 0 ; i < k ; i++){

//         std::cout<< char(vec[min_vec_index[i]][2])<<std::endl;
//     }

// for (int i = 0 ; i < k ; i++){

//     std::cout<< char_vec[i] <<std::endl;
// }


int BLUE =0 , RED = 0;

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
