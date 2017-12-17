//conor COHEN FARRELL 15449588
#include <iostream>
using namespace std;
int main()
{
int x;
cin >> x;

for(int i = 0; i<5; i++){
	cout << x%10 << "  ";
	x /= 10;
}
return 0;
}
