#include <iostream>

using namespace std;

void display( char ch[] ){
	cout << ch;
}

int main(){
	char arr[30];
	cout << "Enter a word" << endl;
	cin >> arr;
	display(arr);
	return 0;
}