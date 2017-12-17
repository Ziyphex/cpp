//Conor COHEN FARRELL, 15449588

#include <iostream>

using namespace std;

struct person{
	string name;
	int age;
};

int main(){
	
	//ask how many people should be created
	int numPpl;
	cout << "How many people do you want? " << endl;
	cin >> numPpl;
	
	//array for people
	person group[numPpl];
	
	//get the names and ages of people
	for(int i = 0; i < numPpl; i++){
		cout << "Name:"<< endl;
		cin >> group[i].name;
		cout << "Age:" << endl;
		cin >> group[i].age;
	}

	cout << "--------------------" << endl;

	//print names and ages in reverse order
	for(int i = numPpl-1; i >= 0; i--){
		cout << group[i].name << endl;
		cout << group[i].age << endl;
	}
}
