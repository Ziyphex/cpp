//Conor COHEN FARRELL, 15449588

#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
	//initiate variables
	int roll;
	int listing[11];

	//srand to ensure a more diverse selection of random numbers upon execution
	srand (time(NULL));

	cout << "How many times do you want to roll the die? ";
	cin >> roll;

	//fill listing array with zero's
	for(int i = 0; i < 11; i++){
		listing[i] = 0;
	}

	//increment the appropriate indexes by 1 as the die are rolled
	for(int i = 0; i < roll; i++){
		int dice1 = (rand() % 6)+1;
		int dice2 = (rand() % 6)+1;
		int sum = dice1 + dice2;
		listing[sum-2]++;
	}

	//print out the percentage of times appeared
	for(int i = 2; i <= 12; i++){
		float pr = (float(listing[i-2])/float(roll))*100;
		cout << "Number " << i << " appeared " << pr << "% of the time" << endl;
	}

}
