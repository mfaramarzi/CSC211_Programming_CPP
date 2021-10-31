#include "cellgrid.h"
#include <iostream>
#include <fstream>
using namespace std;


// reads a file containing 1's and 0's and the dimesnsions to expect and
// creates a Cellgrid object
Cellgrid::Cellgrid(const char *fname, int m, int n) {
    // assign row and col counters
    rows = m;
    cols = n;

    // create the grid on the heap, this will have to be deallocated later in
    // the destructor
    grid = new bool[rows*cols];

    // create a file reader stream to read data from a file
    ifstream infile;

    // open a stream to the given file
    infile.open(fname);//infile is a file stream between fname and assigning obj (grid)

    // we are using row-major order in order to store this grid in 1D
    // instead of accessing grid like grid[a][b], we instead do:
    // grid[(a * number of columns) + b] 
    // a is i, b is j (offset)
    for(int i = 0; i < rows; i++) {
        // calculate "(a * number of columns)" from above
        // in order to save some unnecessary computation
        int base = i * cols;
        for(int offset = 0; offset < cols; offset++) {
            // read data from filestream and store it in grid
            infile >> grid[base + offset]; 
        }
    }

    // close the filestream once we are done with it
    infile.close();
}

// destruct object where not implicit to the program
Cellgrid::~Cellgrid() {
    // since we allocated memory on the heap, we must deallocate that memory. 
    // Default cestructor will not delete aynamic array. we need to have a customized one.
    delete[] grid;
}

// this is the function call which will be made by the autograder to test
// your implementation for problem 1. (row, col) is the "start point" for
// counting the cells, conn is the type of connection to consider (4 or 8).
int Cellgrid::countCells(int row, int col, int conn) { //row and col are x and y. rows and cols are M and N
    // TODO: It will ve a back tracking.
    // implement solution for problem 1.

    // this is where your private helper method which does the
    // backtracking should be called
    static bool cheker = true;
        static int i = row - 1;
        static int j = col - 1;
        static int count = 0 ;

        // base condition
        
        if (cheker == false){

            return count;
        }

////////////////
        
        if (conn == 4){

            if ( grid[cols * i + j + 1 ] == 1 && (cols * i + j + 1) < (cols * rows ) ) { // I need to add another condition in the if statements to prevent going out of board!!!!!!!!!!!!!!!

                j++; //going right

                count++; //counting that alive cell

                grid [cols * i + j] = 0; //killing the cell
            }

            else if ( ( grid[cols * i + j - 1 ] == 1 ) && ( cols * i + j - 1 >= 0 ) ) {

                j--; //going left

                count++; //counting that alive cell

                grid [cols * i + j] = 0; //killing the cell
            }

            else if ( ( grid[cols * i + j + cols ] == 1 ) &&  ( cols * i + j + cols < cols * rows ) ) {

                j += cols; //going down

                count++; //counting that alive cell

                grid [cols * i + j] = 0; //killing the cell
            }

            else if ( grid[cols * i + j - cols ] == 1 &&  ( cols * i + j - cols >= 0 ) ) {

                j -= cols; //going up

                count++; //counting that alive cell

                grid [cols * i + j] = 0; //killing the cell
            }

            else{

                cheker = false;
            }
        }
//////////////////

        else if (conn == 8){

            if ( grid[cols * i + j + 1 ] == 1 && (cols * i + j + 1) < (cols * rows )) {

                j++; //going right

                count++; //counting that alive cell

                grid [cols * i + j] = 0; //killing the cell
            }

            else if ( grid[cols * i + j - 1 ] == 1 && ( cols * i + j - 1 >= 0 ) ) {

                j--; //going left

                count++; //counting that alive cell

                grid [cols * i + j] = 0; //killing the cell
            }

            else if ( grid[cols * i + j + cols ] == 1 &&  ( cols * i + j + cols < cols * rows ) ) {

                j += cols; //going down

                // count++; //counting that alive cell

                grid [cols * i + j] = 0; //killing the cell
            }

            else if ( grid[cols * i + j - cols ] == 1 &&  ( cols * i + j - cols >= 0 ) ) {

                j -= cols; //going up

                // count++; //counting that alive cell

                grid [cols * i + j] = 0; //killing the cell
            }



            else if ( grid[cols * i + j - cols - 1 ] == 1 && ( cols * i + j - 1 >= 0 ) ) {

                            j = j - cols - 1 ; //going up-left

                            count++; //counting that alive cell

                            grid [cols * i + j] = 0; //killing the cell
            }

            else if ( grid[cols * i + j - cols + 1 ] == 1 && ( cols * i + j - 1 >= 0 ) ) {

                            j = j - cols + 1; //going up-right

                            count++; //counting that alive cell

                            grid [cols * i + j] = 0; //killing the cell
            }

            else if ( grid[cols * i + j + cols - 1 ] == 1 && ( cols * i + j + cols < cols * rows ) ) {

                            j = j + cols - 1; //going down-left

                            count++; //counting that alive cell

                            grid [cols * i + j] = 0; //killing the cell
            }

            else if ( grid[cols * i + j + cols + 1 ] == 1 && ( cols * i + j + cols < cols * rows ) ) {

                            j = j + cols + 1; //going down-right

                            count++; //counting that alive cell

                            grid [cols * i + j] = 0; //killing the cell
            }

            else{

                cheker = false;
            }
        }

        // recursion
       
        countCells(i , j , conn);
}

// this is the funciton call which will be made by the autograder to test
// your implementation for problem 2. conn is the type of connection
// to consider (4 or 8).
int Cellgrid::countBlobs(int conn) {
   
   static bool cheker = true;

    static int i = 0; //starting scanning frm the first point index[0]
        
    static int count = 0 ; //INT OVERFLOW - ADDING OR COUNTING TOO MUCH

       

////////////////444444444444444444444444
        
        if (conn == 4){

            if ( i + 1 < cols * rows ) 
            {
                if ( grid[ i + 1] == 1 ) // if the right cell is "1" and is not out of board
                {

                i++; //going right

                grid [ i ] = 0; //killing the cell. even if it is already zero?!!   
                }
            }
            

            else if (  i - 1 >= 0 ) //if the right cell is "1"
            {
                if (grid[ i - 1] == 1)
                {

                    i--; //going left

                    grid [i] = 0; //killing the next cell //grid[--i] it could be combined of both lines    

                }
            }

            else if (  i + cols  < cols * rows ) //if the bottom cell is "1"
            {
                if (grid[i + cols] == 1)
                { 
                    i += cols; //going down

                    grid [i] = 0; //killing the cell
                }   
            }

            else if ( i - cols  >= 0 ) //if the up cell is "1"
            {
                if (grid[i - cols] == 1)
                {
                i -= cols; //going up

                grid [ i ] = 0; //killing the cell
                }   
            }

            else if ( grid [ i ] = 1) //if the cell is the only "1" in the blob (surrondings are not 1)
            {
                grid [ i ] = 0;

                count++;
            }

            else if (  i + 1  < rows * cols ) //if the cell itself and all it surronding cells are zero
            {
                if (grid [ i ] == 0 ){

                    i++;
                }
                
            }
        }
//////////////////88888888888888888888888888888888

        else if (conn == 8){

           if (  i + 1 < cols - 1 ) // if the right cell is "1" and is not out of board
           {
               if (grid[ i + 1] == 1)
               {
                   
                   i++; //going right

                    grid [ i ] = 0; //killing the cell. even if it is already zero?!!
               }  
            }

            else if ( i - 1 >= 0 )  //if left cell is 1
            {
                if( grid[ i - 1] == 1)
                {
                    i--; //going left

                    grid [i] = 0; //killing the next cell
                }  
            }

            else if (  i + cols < cols * rows ) //if bottom cell is 1
            {
                if (grid [i + cols] == 1)
                {
                    i += cols; //going down

                    grid [i] = 0; //killing the cell
                }   
            }

            else if ( i - cols  >= 0 ) //if top cell is 1 
            {
                if (grid [i - cols] == 1)
                {
                    i -= cols; //going up

                    grid [ i ] = 0; //killing the cell
                }   
            }


            else if (  i - cols - 1 >= 0 ) //if top-left is 1
            { 
                if (grid[ i - cols - 1] == 1)
                {
                    i = i - cols - 1 ; //going up-left

                    grid [i] = 0; //killing the cell
                }              
            }

            else if (  i - cols + 1 >= 0 ) //if up right is 1
            { 
                if (grid[i - cols + 1] == 1 )
                {
                i = i - cols + 1; //going up-right

                grid [i] = 0; //killing the cell
                }

                            
            }

            else if (  i + cols - 1 < rows * cols ) //if down-left is 1
            {
                if (grid[i + cols - 1] == 1)
                {
                    i = i + cols - 1; //going down-left

                    grid [ i ] = 0; //killing the cell
                }               
            }

            else if ( i + cols + 1 < rows * cols) //if down-right is 1
            { 
                if (grid[i + cols + 1] == 1)
                {
                    grid [i] = 0; //killing the cell
                    
                    i = i + cols + 1; //going down-right  
                }    
            }

            else if ( grid [ i ] == 1) //if the next cell is the only "1" in the blob, it is a blob (just the first cell?)
            { 

                grid [ i ] = 0;

                count++;
                                     }

            else if (  i + 1 < rows * cols )  //if sell and its surronding cells are zero, we move right
            {
                if (grid [ i ] == 0)
                {
                    i++;
                }  
            }


            // base condition
            
            else if (i + 1 == rows * cols ) // when we are in the last cell and its value is zero (not 1)
            {
                if ( grid [ i ] == 0){

                    return count;   
                }

            
            }

        }
        // recursion

        std::cout<< grid[i];
        countBlobs(conn); //doing the same cheking for the new cell with new i

}

// this function prints your cellgrid in 2D format without trailing
// whitespace. Use this function to aid in debugging if you wish
void Cellgrid::print() {
    for(int i = 0; i < rows; i++) {
        int base = i * cols;
        std::cout << grid[base];
        for(int offset = 1; offset < cols; offset++) {
            std::cout << ' ' << grid[base + offset];
        }
        std::cout << std::endl;
    }
}


  