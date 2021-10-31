/*
9. same_gmail
*/

#include<iostream>
#include<string>



void clean_dots( std::string& str);

void upper_to_lower( std::string& str);

void seperat_str(const std::string str, std::string& str1, std::string& str2);

void remove_plus (std::string& str);



int main(){


std::string str;

getline(std::cin , str );

std::string str1;

std::string str2;

clean_dots(str);

upper_to_lower(str);

seperat_str(str, str1, str2);

remove_plus(str1);

remove_plus(str2);

if (str1 == str2){

    std::cout <<"True";
}

else{
    std::cout<< "False";
}

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


// a function to convert uppercase to lowercase

void upper_to_lower( std::string& str){


    for (int i = 0 ; i < str.length() ; i++){

        if (int ( str.at(i) ) >= 65 && int ( str.at(i) ) <= 90){

            str.at(i) = char ( int ( str.at(i) ) + 32 );
        }
    }
    // std::cout << str;
}



// a function to seperae strings
void seperat_str(const std::string str, std::string& str1, std::string& str2){



int i = 0;

// finfing last index of first str

    while ( str.at(i) != ' '){ 

        i++;

    }

str1 = str;

str2 = str;

str1.erase(i , str1.length() - i);
  
str2.erase(0 , i+1);
    
} 




// a function to remove characters between + and @

void remove_plus (std::string& str){
    int j = -1;
    int k; 
    for (int i = 0 ; i < str.length() ; i++){
        
        

        if (str.at(i) == '+'){

             j = i;
             while(str.at(i) != '@'){
                 i++;
             }
        }
if (str.at(i) == '@' && j != -1){

             k = i;
             
        str.erase(j, k - j); 
    } 
    
}
}