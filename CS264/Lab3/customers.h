//Conor COHEN FARRELL, 15449588

#pragma once
using namespace std;
struct customer{
	string name;
	customer *next;
};

void print_customers(customer &head);
