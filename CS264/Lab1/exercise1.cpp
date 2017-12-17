//conor COHEN FARRELL 15449588
#include <iostream>
using namespace std;
int main()
{
int x, y, z;
cin >> x;
cin >> y;
cin >> z;
int sum = x+y+z;
int average = sum/3;
int product = x*y*z;
int smallest=0; 
int largest=0;

if(x<y && x<z){
	smallest = x;
}
else if(y<x && y<z){
	smallest = y;
}
else{
	smallest = z;
}

if(x>y && x>z){
	largest = x;
}
else if(y>x && y>z){
	largest = y;
}
else{
	largest = z;
}

cout << "SUM: " << sum << "\nAVERAGE: " << average << "\nPRODUCT: " << product << "\nSMALLEST: " << smallest << "\nLARGEST: " << largest << endl;

return 0;
}
