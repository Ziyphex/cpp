//Conor COHEN FARRELL 15449588

#include <iostream>
#include <stdlib.h>
#include "die.h"
using namespace std;
Die::Die(int sides) {
	this->sides = sides;
}
int Die::getNumsides() {
	return sides;
}

int Die::roll() {
	int dieSides = sides;
	value = (rand()%dieSides-1)+1;
	return value;
}

int Die::getValue() {
	return value;
}


