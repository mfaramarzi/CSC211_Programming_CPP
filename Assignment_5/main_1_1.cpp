#include<iostream>
#include<string>
#include"cellgrid.h"
#include<vector>
#include <fstream>


int main(){

    // declare input variables
    // std::string fname;
    const char *fname; //refrencing variable. to a C string?
    int m ; //Number of rows in the grid
    int n ;//Number of columns in the grid
    int x ;//Row of the starting cell
    int y ;//Column of the starting cell
    int conn ; //Connection type. Can be either `4` or `

    // input data
    // std::cin>> *fname; //derefrencing the refrencing var

    std::cin.getline ( *fname, 256, '\n' );
    std::cin>> m;
    std::cin>> n;
    std::cin>> x;
    std::cin>> y;
    std::cin>> conn;
 // making obj of class "cellgrid"
   
    Cellgrid obj (fname, m, n);

    obj.~Cellgrid(); // destructor: in constructor we allocated memory on the heap, we must deallocate that memory

    obj.countCells( x,  y, conn);














    }