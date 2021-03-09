/*
Write a program which will read three double values: 0 < loan <= 10^10 (the initial loan), 0 <= interest <= .5 (the monthly interest), and 0 < payment <= loan (the monthly payment) respectively. 
We will assume that your monthly payment always takes place after the loan accrues any interest for that month. 
We will also assume that there will be a minimum of one month required to pay off any loan. 
Your program should print out the number of months required to pay off the loan. For example, input 500.0 0.05 499.0 will output 2.
*/

/*
months to pay off the loan?

do{

    loan *= (1 + interest))
    loan -= payement
    months++
    }
    while (loan > 0);

 

*/

#include<iostream>
#include<cmath>

int main(){

    double loan, interest, payement;
    int months(0);

    //Reading variables
    std::cin >> loan >> interest >> payement;

    do{

    // loan = loan * (1 + interest);
    loan = loan + loan*interest;
    // std::cout<<loan<<std::endl;
    // std::cout<<payement<<std::endl;
    loan -= payement;
    // std::cout<<loan<<std::endl;
    months++;
    // std::cout<<loan<<std::endl;
    }
    while (loan > 0);
   std::cout << months << std::endl; 
    }


    // Condition for values to be in the allowed rage

    // if(loan > 0 && loan < pow(10, 10) && interest >= 0 && interest <= 0.5 && payement > 0 && payement <= loan){

    // A do-while loop to calculate number of monthly payements

    // for (months = 0; loan > 0; months++){

    //     loan *= (1 + interest);
    //     loan -= payement;
    //     }
        
    // std::cout << months << std::endl; 
    //     }

//     while (loan > 0){

//     loan *= (1 + interest);
//     loan -= payement;
//     months++;
//     }
    
//    std::cout << months << std::endl; 
//     }

    

    