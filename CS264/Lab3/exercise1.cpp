//Conor COHEN FARRELL, 15449588


#include <iostream>
using namespace std;

int main(){
	//declare vars and gain user input for array size
	int arr_size;
	cout << "Array Size: " << endl;
	cin >> arr_size;
	double arr[arr_size];

	//user input of doubles to use
	cout << "Enter a Sequence of doubles: " << endl;
	for(int i = 0; i < arr_size; i++){
		cin >> arr[i];
	}

	//print in reverse order
	for(int i = arr_size-1; i >=0 ; i--){
		cout << arr[i] << endl;
	}
	return 0;
}

