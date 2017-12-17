//Conor COHEN FARRELL 15449588

#include "die.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
	int dieSides1 = 0;
	int dieSides2 = 0;
	cout << "How many sides for die 1?" << endl;
	cin >> dieSides1;
	if(dieSides1 < 4) {
		cout << "Cannot set sides lower than 4. Defaulted to 6 sides." << endl;
		dieSides1 = 6;	
	}
	cout << "How many sides for die 2?" << endl;
	cin >> dieSides2;
	if(dieSides2 < 4) {
		cout << "Cannot set sides lower than 4. Defaulted to 6 sides." << endl;
		dieSides2 = 6;	
	}
	Die die1(dieSides1);
	Die die2(dieSides2);

	int size = (dieSides1+dieSides2);
	int rollArray[size];
	for(int x = 0; x < size; x++) {
		rollArray[x] = 0;	
	}

	srand(time(NULL));
	
	int times = 0;
	cout << "How many rolls?" << endl;
	cin >> times;
	
	int totalValue = 0;
	for(int i = 0; i < times; i++) {
		int roll1 = die1.roll();
		int roll2 = die2.roll();
		int totalValue = roll1 + roll2;
		
		rollArray[totalValue]++;
	}
	for(int k = 2; k <= size; k++) {
		cout << k << " appeared " << (float((rollArray[k-2])/float(times)))*100 << "%" << " of the time." << endl;
	}
}
