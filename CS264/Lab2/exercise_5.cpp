//Conor COHEN FARRELL, 15449588

#include <iostream>
#include <cstring>
using namespace std;

void print_string_array(char str[]){
	//run loop until the blank is reached
	for(int i=0; str[i]!='\0';i++){
		cout << str[i];
	}
	cout << '\n';
}

void print_string_ptr(char *str){

	//run for the length, inc the pointer
	for(int i=0; i<=sizeof(str); i++){
		cout << *(str+i);
	}
	cout << '\n';
}

int main(){
	//Get user input
	char s[10];
	cout << "Enter a String 10 or less characters long: ";
	cin.getline(s,10);

	//send to methods
	print_string_array(s);
	print_string_ptr(s);
}
