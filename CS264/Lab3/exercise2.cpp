//Conor COHEN FARRELL, 15449588


#include <iostream>
#include <cstring>
using namespace std;


int main(){
	//Variable Declaration
	int count = 10;
	int n = 0;

	//Pointer Array that will change size as needed
	double* ar = new double[count];
	

	// Read into the array and ensure it ends when user enters -1
	while (cin >> ar[n] && ar[n]!=-1) {
	    n++;

		//Check if the current position in the array is >= the size of the array
	    if (n >= count) {
		//double the size of the array
		count *= 2;
		//create a new array that is of the new size and copy contents of ar over 
		double* temp = new double[count];
		for (int i = 0; i < n; i++) {
		    temp[i] = ar[i];
		}
		
		//delete old array memory
		delete [] ar;
		//point the old array to the temp array. This is the new working array
		ar = temp;
	    }         
	}
	
	//print elements backwards
	for(int i = n-1; i >=0 ; i--){
		cout << ar[i] << endl;
	}
	
}
