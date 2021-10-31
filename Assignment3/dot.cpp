#include<iostream>
#include<string>

void clean_dots( std::string& str);

int main(){


std::string str;

getline(std::cin , str );

clean_dots(str);

std::cout<< str;
}


// a function to remove dots

void clean_dots( std::string& str){
    
    int j(0);

    for (int i = 0 ; i < str.length() ; i++){

        if (str.at(i) == '.' ){  //&& str.at(i) != '\0'

            str.erase(i , 1);
            i--;
        }
    
}
// std::cout << new_str;
}