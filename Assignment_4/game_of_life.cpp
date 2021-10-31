#include<iostream>
#include<vector>

void gol (int m , int n , int g , std::vector<std::vector<char>> vec);

int main(){

int m , n , g;

std::cin>> m >> n >> g;

std::vector<std::vector<char>> vec;

char value;
//Fill matrix
for(int i = 0; i < m; i++){

std::vector<char> vec_temp;

for(int j = 0; j < n; j++){

std::cin>>value;
vec_temp.push_back(value);


// std::cin >> board[i][j]; //those spots dont exist yet

}
vec.push_back(vec_temp);
}

// for (int i = 0 ; i < m ; i++){

//     for (int j = 0 ; j < n ; j++){

//         std::cin>> vec[i][j];
//     }
// }

gol(m , n , g , vec);


}

void gol (int m , int n , int g , std::vector<std::vector<char>> vec){

    for (int k = 0 ; k < g ; k++){

        std::vector<std::vector<char>> second_vec = vec;

        for (int i = 0 ; i < m ; i++){

            for (int j = 0 ; j < n ; j++){

                int counter = 0;

                // checking the middle celss

                if ( (i > 0) && (i < m - 1) && (j > 0) && (j < n - 1) ){

                    // checking the eneighbors, if more than 3 or less than two of neighbors are '*', we replace vec[i][j] with '.'
            
                    if (vec[i][j - 1] == '*'){

                        counter++;
                    }

                    if (vec[i][j + 1] == '*'){

                        counter++;
                    }

                    if (vec[i - 1][j] == '*'){

                        counter++;
                    }

                    if (vec[i + 1][j] == '*'){

                        counter++;
                    }

                    if (vec[i + 1][j + 1] == '*'){

                        counter++;
                    }

                    if (vec[i + 1][j - 1] == '*'){

                        counter++;
                    }

                    if (vec[i - 1][j + 1] == '*'){

                        counter++;
                    }

                    if (vec[i - 1][j - 1] == '*'){

                        counter++;
                    }

                    if (vec[i][j] == '*'){
                        
                        if(counter > 3 || counter < 2){

                            second_vec[i][j] = '.';
                        }
                    }

                    if (vec[i][j] == '.'){

                        if (counter == 3){

                            second_vec[i][j] = '*';
                        }
                    }
    }

// checking the left side

    if ( (i ==0) && (i < m - 1) && (j > 0) && (j < n - 1) ){

                    // checking the eneighbors, if more than 3 or less than two of neighbors are '*', we replace vec[i][j] with '.'
            
                    if (vec[i][j - 1] == '*'){

                        counter++;
                    }

                    if (vec[i][j + 1] == '*'){

                        counter++;
                    }

                    // if (vec[i - 1][j] = '*'){

                    //     counter++;
                    // }

                    if (vec[i + 1][j] == '*'){

                        counter++;
                    }

                    if (vec[i + 1][j + 1] == '*'){

                        counter++;
                    }

                    if (vec[i + 1][j - 1] == '*'){

                        counter++;
                    }

                    // if (vec[i - 1][j + 1] = '*'){

                    //     counter++;
                    // }

                    // if (vec[i - 1][j - 1] = '*'){

                    //     counter++;
                    // }

                    if (vec[i][j] == '*'){
                        
                        if(counter > 3 || counter < 2){

                            second_vec[i][j] = '.';
                        }
                    }

                    if (vec[i][j] == '.'){

                        if (counter == 3){

                            second_vec[i][j] = '*';
                        }
                    }
    }

// checking bottom side

    if ( (i > 0) && (i == m - 1) && (j > 0) && (j < n - 1) ){

                    // checking the eneighbors, if more than 3 or less than two of neighbors are '*', we replace vec[i][j] with '.'
            
                    if (vec[i][j - 1] == '*'){

                        counter++;
                    }

                    if (vec[i][j + 1] == '*'){

                        counter++;
                    }

                    if (vec[i - 1][j] == '*'){

                        counter++;
                    }

                    // if (vec[i + 1][j] = '*'){

                    //     counter++;
                    // }

                    // if (vec[i + 1][j + 1] = '*'){

                    //     counter++;
                    // }

                    // if (vec[i + 1][j - 1] = '*'){

                    //     counter++;
                    // }

                    if (vec[i - 1][j + 1] == '*'){

                        counter++;
                    }

                    if (vec[i - 1][j - 1] == '*'){

                        counter++;
                    }

                    if (vec[i][j] == '*'){
                        
                        if(counter > 3 || counter < 2){

                            second_vec[i][j] = '.';
                        }
                    }

                    if (vec[i][j] == '.'){

                        if (counter == 3){

                            second_vec[i][j] = '*';
                        }
                    }
    }
// checking left side

    if ( (i > 0) && (i < m - 1) && (j == 0) && (j < n - 1) ){

                    // checking the eneighbors, if more than 3 or less than two of neighbors are '*', we replace vec[i][j] with '.'
            
                    // if (vec[i][j - 1] = '*'){

                    //     counter++;
                    // }

                    if (vec[i][j + 1] == '*'){

                        counter++;
                    }

                    if (vec[i - 1][j] == '*'){

                        counter++;
                    }

                    if (vec[i + 1][j] == '*'){

                        counter++;
                    }

                    if (vec[i + 1][j + 1] == '*'){

                        counter++;
                    }

                    // if (vec[i + 1][j - 1] = '*'){

                    //     counter++;
                    // }

                    if (vec[i - 1][j + 1] == '*'){

                        counter++;
                    }

                    // if (vec[i - 1][j - 1] = '*'){

                    //     counter++;
                    // }

                    if (vec[i][j] == '*'){
                        
                        if(counter > 3 || counter < 2){

                            second_vec[i][j] = '.';
                        }
                    }

                    if (vec[i][j] == '.'){

                        if (counter == 3){

                            second_vec[i][j] = '*';
                        }
                    }
    }
// checking right side

    if ( (i > 0) && (i < m - 1) && (j > 0) && (j == n - 1) ){

                    // checking the eneighbors, if more than 3 or less than two of neighbors are '*', we replace vec[i][j] with '.'
            
                    if (vec[i][j - 1] == '*'){

                        counter++;
                    }

                    // if (vec[i][j + 1] = '*'){

                    //     counter++;
                    // }

                    if (vec[i - 1][j] == '*'){

                        counter++;
                    }

                    if (vec[i + 1][j] == '*'){

                        counter++;
                    }

                    // if (vec[i + 1][j + 1] = '*'){

                    //     counter++;
                    // }

                    if (vec[i + 1][j - 1] == '*'){

                        counter++;
                    }

                    // if (vec[i - 1][j + 1] = '*'){

                    //     counter++;
                    // }

                    if (vec[i - 1][j - 1] == '*'){

                        counter++;
                    }

                    if (vec[i][j] == '*'){
                        
                        if(counter > 3 || counter < 2){

                            second_vec[i][j] = '.';
                        }
                    }

                    if (vec[i][j] == '.'){

                        if (counter == 3){

                            second_vec[i][j] = '*';
                        }
                    }
    }

// checking left up

    if ( (i == 0) && (i < m - 1) && (j== 0) && (j < n - 1) ){

                    // checking the eneighbors, if more than 3 or less than two of neighbors are '*', we replace vec[i][j] with '.'
            
                    // if (vec[i][j - 1] = '*'){

                    //     counter++;
                    // }

                    if (vec[i][j + 1] == '*'){

                        counter++;
                    }

                    // if (vec[i - 1][j] = '*'){

                    //     counter++;
                    // }

                    if (vec[i + 1][j] == '*'){

                        counter++;
                    }

                    if (vec[i + 1][j + 1] == '*'){

                        counter++;
                    }

                    // if (vec[i + 1][j - 1] = '*'){

                    //     counter++;
                    // }

                    // if (vec[i - 1][j + 1] = '*'){

                    //     counter++;
                    // }

                    // if (vec[i - 1][j - 1] = '*'){

                    //     counter++;
                    // }

                    if (vec[i][j] == '*'){
                        
                        if(counter > 3 || counter < 2){

                            second_vec[i][j] = '.';
                        }
                    }

                    if (vec[i][j] == '.'){

                        if (counter == 3){

                            second_vec[i][j] = '*';
                        }
                    }
    }

// checking right up
    if ( (i == 0) && (i < m - 1) && (j > 0) && (j == n - 1) ){

                    // checking the eneighbors, if more than 3 or less than two of neighbors are '*', we replace vec[i][j] with '.'
            
                    if (vec[i][j - 1] == '*'){

                        counter++;
                    }

                    // if (vec[i][j + 1] = '*'){

                    //     counter++;
                    // }

                    // if (vec[i - 1][j] = '*'){

                    //     counter++;
                    // }

                    if (vec[i + 1][j] == '*'){

                        counter++;
                    }

                    // if (vec[i + 1][j + 1] = '*'){

                    //     counter++;
                    // }

                    if (vec[i + 1][j - 1] == '*'){

                        counter++;
                    }

                    // if (vec[i - 1][j + 1] = '*'){

                    //     counter++;
                    // }

                    // if (vec[i - 1][j - 1] = '*'){

                    //     counter++;
                    // }

                    if (vec[i][j] == '*'){
                        
                        if(counter > 3 || counter < 2){

                            second_vec[i][j] = '.';
                        }
                    }

                    if (vec[i][j] == '.'){

                        if (counter == 3){

                            second_vec[i][j] = '*';
                        }
                    }
    }


// checking left down

    if ( (i > 0) && (i == m - 1) && (j == 0) && (j < n - 1) ){

                    // checking the eneighbors, if more than 3 or less than two of neighbors are '*', we replace vec[i][j] with '.'
            
                    // if (vec[i][j - 1] = '*'){

                    //     counter++;
                    // }

                    if (vec[i][j + 1] == '*'){

                        counter++;
                    }

                    if (vec[i - 1][j] == '*'){

                        counter++;
                    }

                    // if (vec[i + 1][j] = '*'){

                    //     counter++;
                    // }

                    // if (vec[i + 1][j + 1] = '*'){

                    //     counter++;
                    // }

                    // if (vec[i + 1][j - 1] = '*'){

                    //     counter++;
                    // }

                    if (vec[i - 1][j + 1] == '*'){

                        counter++;
                    }

                    // if (vec[i - 1][j - 1] = '*'){

                    //     counter++;
                    // }

                    if (vec[i][j] == '*'){
                        
                        if(counter > 3 || counter < 2){

                            second_vec[i][j] = '.';
                        }
                    }

                    if (vec[i][j] == '.'){

                        if (counter == 3){

                            second_vec[i][j] = '*';
                        }
                    }
    }

    if ( (i > 0) && (i == m - 1) && (j > 0) && (j == n - 1) ){

                    // checking the eneighbors, if more than 3 or less than two of neighbors are '*', we replace vec[i][j] with '.'
            
                    if (vec[i][j - 1] == '*'){

                        counter++;
                    }

                    // if (vec[i][j + 1] = '*'){

                    //     counter++;
                    // }

                    if (vec[i - 1][j] == '*'){

                        counter++;
                    }

                    // if (vec[i + 1][j] = '*'){

                    //     counter++;
                    // }

                    // if (vec[i + 1][j + 1] = '*'){

                    //     counter++;
                    // }

                    // if (vec[i + 1][j - 1] = '*'){

                    //     counter++;
                    // }

                    // if (vec[i - 1][j + 1] = '*'){

                    //     counter++;
                    // }

                    if (vec[i - 1][j - 1] == '*'){

                        counter++;
                    }

                    if (vec[i][j] == '*'){
                        
                        if(counter > 3 || counter < 2){

                            second_vec[i][j] = '.';
                        }
                    }

                    if (vec[i][j] == '.'){

                        if (counter == 3){

                            second_vec[i][j] = '*';
                        }
                    }
    }
            }
    }
    vec = second_vec;
}

// std::cout<<std::endl;

for (int i = 0 ; i < m ; i++){

    for (int j = 0 ; j < n ; j++){

        if ( j == n - 1){

            std::cout<< vec[i][j];
        }

        else{

            std::cout<< vec[i][j]<<" ";
        }
        
    }
    std::cout<<std::endl;
}

}