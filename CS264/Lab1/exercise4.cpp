//conor COHEN FARRELL 15449588
#include <iostream>
using namespace std;
int main(){

bool run = true;
while(run){
	int accountNum;
	cin >> accountNum;
	if(accountNum == -1){
		run = false;
	}
	else{
		double bal;
		double tot;
		double credits;
		double lim;
		cin >> bal >> tot >> credits >> lim;
		double newBal = bal + tot - credits;
		if(newBal > lim){
			cout << accountNum << " " << lim << " " << newBal << " Credit limit exceeded" << endl;
		}
		else{
			cout << newBal << endl;
		}
	}
}
return 0;
}
