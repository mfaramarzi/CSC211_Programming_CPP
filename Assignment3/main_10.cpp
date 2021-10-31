/*

*/

#include<iostream>

#include<string>


void upper_to_lower( std::string& str);

void domain(std::string& str);


int main(){


std::string str;

getline(std::cin , str );

upper_to_lower(str);

domain(str);

std::cout<< str;
}





// a function to convert uppercase to lowercase

void upper_to_lower( std::string& str){


    for (int i = 0 ; i < str.length() ; i++){

        if (int ( str.at(i) ) >= 65 && int ( str.at(i) ) <= 90){

            str.at(i) = char ( int ( str.at(i) ) + 32 );
        }
    }
    // std::cout << str;
}




// a function to find a domain address

void domain(std::string& str){

    int count = 0;

    int i;

    int j;


    for ( i = 0 ; count < 3 && i < str.length(); i++){

        if(str.at(i) == '/'){

            count++;
        }
        }
        if(count == 3){

            i--; //index which has the third '/'

        }
    

    str.erase(i , str.length() - 1);


count = 0;

for ( i = 0 ; count < 2 && i < str.length() ; i++){

    if(str.at(i) == '/'){

            count++;
        }
}
 i--; //index which has the second '/' of newly earased str

    str.erase(0 , i + 1);

//     if ( str.find("www.") != 0){

//      str = "www." + str;
//  }
int index;

if (str.find(":") != -1){

index = str.find(":");

str.erase(index , str.length() - 1);
}

}


 