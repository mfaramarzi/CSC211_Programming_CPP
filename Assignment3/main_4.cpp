/*
4. sorted

Write a program which reads a sequence of 0 < n <= 100 integers as input and prints Sorted if the input sequence is sorted in nonincreasing order and Not Sorted otherwise.
*/
/*

*/

#include<iostream>

void fill_array(int arr[], int size, int& number_used);

void sort_array(int arr[], int size, int number_used);

int main(){

int MAX_NUMBER (100), number_used;
int arr[MAX_NUMBER];

fill_array(arr, MAX_NUMBER , number_used);

sort_array(arr, MAX_NUMBER , number_used);


}

// defining functions

// fill_array func

void fill_array(int arr[], int size, int& number_used){

    int num, index(0);

    while(std::cin >> num){

        arr[index] = num;

        index++;
        number_used = index;
    }
}

// sort_array func
void sort_array(int arr[], int size, int number_used){

    if (number_used == 1){ // if we only have one element, it is sorted
           std::cout<<"Sorted"; 
           exit;
        }

    for (int i = 0 ; i < number_used - 1 ; i++){ // it never runs for one element

        if (arr[i] < arr[i + 1]){

        std::cout<< "Not Sorted"; //if anywhere a number is larger tan previous one, it is not sorted and break
        break;
    }
        else if (i == number_used -2){ // if loop reaches to the end it means it is sorted

            std::cout<<"Sorted";
        }
        
    }
}