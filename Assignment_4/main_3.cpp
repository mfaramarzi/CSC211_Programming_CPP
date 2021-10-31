#include<iostream>
#include<vector>

void puzzle(std::vector<int> num_vec , std::vector<char> com_vec);

int main(){

int num_value;

char ch_value;

std::vector<int> num_vec;

std::vector<char> com_vec;

// pushing back values one by one to the 1-d num_vec


for (int i = 0 ; i < 9 ; i++){

    std::cin>> num_value;

    num_vec.push_back(num_value);

}

// std::getline()
// pushing back values one by one to the 1-d com_vec

while ( std::cin>> ch_value ){

    com_vec.push_back(ch_value);

}

puzzle(num_vec , com_vec);

}

void puzzle(std::vector<int> num_vec , std::vector<char> com_vec){


// finding the index of cell with value zero

int index_zero;

for (int i = 0 ; i < num_vec.size() ; i++){

    if (num_vec[i] == 0){

        index_zero = i;
    }
}

// swapping zero with the commanded address

for (int i = 0 ; i < com_vec.size() ; i++){

    if (com_vec[i] == 'U'){

        // swap cell zero with the above cell if it doesnt pass grid bounds

        if (index_zero - 3 >= 0){

            std::swap(num_vec[index_zero] , num_vec[index_zero - 3] );

            index_zero -=3;
        }
    }

if (com_vec[i] == 'D'){

        // swap cell zero with the blow cell if it doesnt pass grid bounds

        if (index_zero + 3 <= 8){

            std::swap(num_vec[index_zero] , num_vec[index_zero + 3] );

            index_zero += 3;
        }
    }

if (com_vec[i] == 'R'){

        // swap cell zero with the blow cell if it doesnt pass grid bounds

        if (index_zero != 2 && index_zero != 5 && index_zero != 8){

            std::swap(num_vec[index_zero] , num_vec[index_zero + 1] );

            index_zero += 1;
        }
    }

    if (com_vec[i] == 'L'){

        // swap cell zero with the blow cell if it doesnt pass grid bounds

        if (index_zero != 0 && index_zero != 3 && index_zero != 6){

            std::swap(num_vec[index_zero] , num_vec[index_zero - 1] );

            index_zero -= 1;
        }
    }
}

// if numbers in the grid cells are in order (except last one is zero), print Solution is good!, otherwise, Wrong solution!
int count = 0;
for (int i = 0 ; i < num_vec.size()  - 2; i++){ 

    // std::cout<< num_vec[i];

    if (num_vec[i] > num_vec[i + 1] || num_vec[num_vec.size() - 1] != 0 ){
    

        count++;
    }
    
}
if (count != 0){

         std::cout<< "Wrong solution!";

    }
    else{

        std::cout<< "Solution is good!";
    }
}



