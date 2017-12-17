//Conor COHEN FARRELL, 15449588


#include <iostream>
using namespace std;

int gcd(int a, int b){
	
	return b == 0 ? a : gcd(b, a % b);
}

int main(){
	int a, b;
	cout << "First Number: ";
	cin >> a;
	cout << "Second Number: ";
	cin >> b;
	int greatest = gcd(a,b);
	cout << "The Greatest Common Divisor is : " << greatest << endl;
}
