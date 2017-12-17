//conor COHEN FARRELL 15449588
#include <iostream>
using namespace std;
int main(){
int counter = 0;
int count = 0;
for(int i = 1; i < 5000; i++){
	for(int j = 2; j <= i; j++){
		if(i%j==0){
			count++;
		}
	}
	if(count == 1){
		cout << i << endl;
		counter++;
	}
	count = 0;
}
cout << "\n" << counter << " Prime Number from 1 - 5000!" << endl;
return 0;
}
