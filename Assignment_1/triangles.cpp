/*
This program should take as arguments, three interior angles of a triangle (for simplicity we will take only integer values for angles), 
it should classify the triangle as one of the three types of triangles (Acute, Right, and Obtuse) and print that label to the console as output. 
Additionally, if the triangle given is impossible 
(sum of interior angles does not equal 180) the program should not print any labels, and should instead print This triangle is impossible.
*/

#include<iostream>
int main(){

    // defining parameters
    int ang1, ang2, ang3;

    
    // reading a number
    std::cin >> ang1 >> ang2 >> ang3;

    
    //printing weekday in string format
    if(ang1 + ang2 + ang3 != 180){
       std::cout<< "This triangle is impossible\n";} 

    else if (ang1 < 90 && ang2 < 90 && ang3 < 90){
       std::cout<< "Acute\n";}

    else if

        (ang1 == 90 || ang2 == 90 || ang3 == 90){
       std::cout<< "Right\n";} 
    
    else if(ang1 > 90 || ang2 > 90 || ang3 > 90){
       std::cout<< "Obtuse\n";} 
    
    
    
    }