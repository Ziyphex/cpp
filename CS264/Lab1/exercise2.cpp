//conor COHEN FARRELL 15449588
#include <iostream>
using namespace std;
int main()
{
int x,y;
cin >> x >> y;
if(y%x==0){
	cout << x << " is a multiple of " << y << endl;
}
else{
	cout << x << " is not a multiple of " << y << endl;
}
return 0;
}
