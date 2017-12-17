//Conor COHEN FARRELL, 15449588

#include <iostream>
#include <string>
#include "customers.h"

using namespace std;

void print_customers(customer &head){
	customer *cur = &head;
	while(cur != NULL){
		cout << cur->name << endl;
		cur = cur->next;
	}
}
