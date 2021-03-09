/*
This program takes in three integers, representing day month year in that order, and should output the day of the week associated with the given date. 
The formula used to calculate the date is:
*/

#include<iostream>
int main(){

    // defining parameters
    int day, month, year, weekday, century, yearpart;

    
    // reading a number
    std::cin >> day >> month >> year;

    // converting the jan and feb format to a new format

    if (month == 1 || month == 2){

        month = month + 12;
        year = year - 1;
    }

    //calculations
    century = (year / 100);
    yearpart = (year % 100);

    weekday = ((day + ((month + 1) * 26 / 10)) + yearpart + (yearpart / 4) + (century / 4) + 5 * century) % 7;

    //printing weekday in string format

    switch(weekday){

        case 0:
            std::cout << "Saturday\n";
            break;

        case 1:
            std::cout << "Sunday\n";
            break;

        case 2:
            std::cout << "Monday\n";
            break;

        case 3:
            std::cout << "Tuesday\n";
            break;

        case 4:
            std::cout << "Wednesday\n";
            break;

        case 5:
            std::cout << "Thursday\n";
            break;

        case 6:
            std::cout << "Friday\n";
            break;
    }
    

    }