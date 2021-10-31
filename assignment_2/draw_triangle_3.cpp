
// ???
/*
Write a program which reads in three integers a, b, c, such that 0 < {a, b, c} <= 20 and a <= b. 
The program should print the + character a times, then a + c times, then a + c + c times, and so on. This pattern should repeat while the line is at most b characters long. 
At that point, the pattern is repeated backwards. For example input 4 7 1 will output:
*/

/*
for(i = 0, i < (b+1) ; i++){

    for (j = 0 ; (j < (a + i * c) ; j++){
        if(j < b){
            std:cout << '+' << std:endl;
        }
        else{
            for (k = 0 ; (k < (a - (i-a) * c) ; k++){
                if(k < a){
                    std:cout << '+' << std:endl;
        }

            
        }



*/
#include<iostream>
#include<cmath>

int main(){

    int a, b, c, i, j, k, f;

    std::cin >> a >> b >> c;

    if( (a <= 20 && a > 0) && (b <= 20 && b > 0) && (c <= 20 && c > 0)){

    // printing the first half

    for (i = a; i <= b; i = i + c){

        for(j = 0; j < i ; j++){

            std::cout<< '+';
        }
    std::cout<< std::endl;
    }

    // printing the second half

    for (k = j; k >= a; k = k - c){

        for(f = 0; f < k ; f++){

            std::cout<< '+';
        }
        
    std::cout<< std::endl;
    }


    }

}



// #include<iostream>
// #include<cmath>

// int main(){

// int a, b, c, i, j, k;

// std::cin >> a >> b >> c;

// if ((0 < a && a <= 20) && (0 < b && b <= 20) && (0 < c && c <= 20) && (a <= b)){


// for(i = 0; i < (b+1) ; i++){

//     for (j = 0 ; (j < (a + i * c)) ; j++){
        
//         if(j < b){
//             std::cout << '+';
//         }

//         else{
//             std::cout << std::endl; 
//             for (k = 0 ; (k < (a - (i-a) * c)) ; k++){
//                 if(k < a){
//                     std::cout << '+';
//         }     
//         }
//         std::cout << std::endl; 
// }
//     }
// }
// }
// }
