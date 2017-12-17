//Conor COHEN FARRELL, 15449588

#include <iostream>
using namespace std;
const int size = 20;

int my_string_len(char str[])
{
    	int count = 0;
	
	//search for the end of the string and increment count as each char is read
    	for (int i = 0; str[i] != '\0'; i++){
        	count++;
    	}
    	return count;
}
 
void my_string_cat(char dest[], char src[], int dest_size)
{
	//check char array lengths
    	int a = my_string_len(src);
    	int b = my_string_len(dest);
 
	//check if there is room in the destination array to fit the source array contents
    	if (a + b < dest_size){
		//concatenate 2 strings
        	for (int i = b, j = 0; j < a; i++, j++){
            		dest[i] = src[j];
        	}
 		
		//print out new string			
        	cout << "Concatenated string: " << dest << endl;
    	}

	//if there isn't enough room to concatenate
    	else{
        	cout << "Problem! Not enough space to concatenate." << endl;
    	}
}

int main()
{
	//declare char array variables
	char dest[size] = "Hello", src[size]="World";

	//send inputs to new method
    	my_string_cat(dest, src, size);
    	return 0;
}
