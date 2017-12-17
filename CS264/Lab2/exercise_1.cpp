//Conor COHEN FARRELL, 15449588


#include <iostream>
using namespace std;


void my_swap(int a, int b){
	//temp storage
	int temp = a;
	//swap
	a = b;
	b = temp;
	cout << "Swapped to "<< a << " and " << b << endl;
}

int main(){
	//declare Vars
	int x;
	int y;
	//user input
	cout << "First Number: ";
	cin >> x;
	cout << "Second Number: ";
	cin >> y;
	//method call
	my_swap(x,y);
	return 0;
}
