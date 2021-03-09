/*
Prompt the user for three integers representing their birthday in the order <month> <day> <year>. Print the given date as a string on a single line in the following format:
 <month name> <day>, <year>. 10 3 1997 should output October 3, 1997, 1 1 2000 should output January 1, 2000 etc. If a month does not exist, print out Imaginary month.
*/

#include<iostream>

int main(){

    int month, day, year;

    std::cin >> month >> day >> year;

    switch(month){
        case 1 :
            std::cout << "January " << day << ", "  << year << std::endl;
            break;

        case 2 :
            std::cout << "February " << day << ", "  << year << std::endl;
            break;

        case 3 :
            std::cout << "March " << day << ", "  << year << std::endl;
            break;

        case 4 :
            std::cout << "April " << day << ", "  << year << std::endl;
            break;

        case 5 :
            std::cout << "May " << day << ", "  << year << std::endl;
            break;

        case 6 :
            std::cout << "June " << day << ", "  << year << std::endl;
            break;


        case 7 :
            std::cout << "July " << day << ", "  << year << std::endl;
            break;

        case 8 :
            std::cout << "August " << day << ", "  << year << std::endl;
            break;

        case 9 :
            std::cout << "September " << day << ", "  << year << std::endl;
            break;

        case 10 :
            std::cout << "October " << day << ", "  << year << std::endl;
            break;

        case 11 :
            std::cout << "November " << day << ", "  << year << std::endl;
            break;

            case 12 :
            std::cout << "December " << day << ", "  << year << std::endl;
            break;


        default :
            std::cout << "Imaginary month " << std::endl;
        

    }



    }