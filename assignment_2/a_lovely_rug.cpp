/*
Write a program which reads in an integer 0 < n <= 10 prints out this nice rug pattern.
 See examples below for input values of n = 2, n = 3, and n = 4 respectively.
*/

/*



*/


// #include<iostream>
// #include<cmath>

// Declaring function

// void edge(int num);
// // void middle (int num);

// // Main function

// int main(){

// int num, i, j, k;

// std::cin >> num;

// // for(i=0 ; i < (2 * num + 2); i++){

// //     for (j = 0 ; j < 4 * num + 2; j++){

//         // printing top and bottom edges

//         if((i == 0 && j==0)|| (j ==2 * num + 1 && i == 2 * num + 1)){

//         edge (num);
//         }





//         // printing middle contents

//         else if (i > 0 && i < 2 * num + 1 ){ //this line could be an else statement


//             // printing vertical lines in the middle contents
//             if((j == 0) || ( j == 4 * num + 1 )){

//                 std::cout << '|';
//                 continue;
//             }

//             // printing spaces in the middle contents
//             // j < (4 * num - 4)/2
//             else if(j > 0 && j < num - i + 1 ){

//                 std::cout << "  ";
//                 continue;  
//             }

//             // printing <> in the middle contents
//             else if (((j > 0) && (j == num - i + 2 )) || ( (j > 2 * num) && (j == 2 * num + (2 * i - 1) ) ) ){

//                 std::cout << '<' << '>'; 
//                 continue;  
//             }
            
//             // printing dots in the middle contents
//             else if ( ( ( j > 0 ) && ( j > num - i + 2 ) ) || ( ( j > 2 * num ) && ( j < 2 * num + (2 * i - 1 ) ) ) ){

//                 std::cout<<".";
//             }
            
        
//         }

// }



//         std::cout<< std::endl;
//         }
        


//     }


// Defining functions

// edge func



// middle func

// void middle (int num){

//         if((j = 0) || ( j = 4 * num + 1 )){

//             std::cout << '|';
    
//         else if(j > 0 && j < num - i + 1 ){

//             std::cout << "  "

//             std::cout << '<' << '>'; 
            
//         else if (j =  num - i + 3; j < num + i + 3){
                
//                 std::cout << '.';
//             }
//              std::cout << '<' << '>'; 
//         }

//         else if(j > num + i + 2){

//             std::cout << '<' << '>'; 
            
//         }
// }
// }
    
#include<iostream>
#include<cmath>
void edge(int num);
void middle (int num_space, int num_dot);

int main(){

int num, num_space, num_dots, i;


std::cin>> num;


edge(num);

std::cout << std::endl;

num_space = 4 * (num - 1) / 2;

for (i =1; i <= num; i++){

    // void middle (int num_space, int num_dot){


        

        num_dots = 4 * (i - 1);

        middle ( num_space,  num_dots);

        // edge(num);

        std::cout << std::endl;

        num_space -= 2;
}

num_space += 2;
for (i = num ; i >= 1 ; i--){

    // void middle (int num_space, int num_dot){


        

        num_dots = 4 * (i - 1);

        middle ( num_space,  num_dots);

        // edge(num);

        std::cout << std::endl;

        num_space += 2;
}

// std::cout << std::endl;

edge(num);





// func definition
}

    void middle (int num_space, int num_dots){
        int i;

        std::cout<< '|';

        for (i = 1; i <= num_space; i++){

        std::cout << ' ';
        }

        std::cout<< "<>";
    

        for (int j = 0; j < num_dots; j++)  {

            std::cout<<".";

        }

        std::cout<< "<>";

        for (int i = 1; i <= num_space; i++){

        std::cout << ' ';
        }

        std::cout<< '|';   
    }


void edge(int num){

int k;
        std::cout << '#';

        for (k = 1; k < 4 * num + 1; k++){
                std::cout << '=';
        }
        std::cout << '#';      

        }
    