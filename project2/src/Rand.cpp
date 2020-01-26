/*
    Name: Aleksandra Kukawka
    Index number: 300246
    Coordinator: mgr Wiktor Kuśmirek
*/

#include "Rand.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>

void Rand::randNumber() {
	srand(time(NULL));
	int number = std::rand();
	this->num = Number(number);
}

bool Rand::checkParity() {
	 return this->num % 2;
}

void Rand::displayRand() {
	std::cout << "Random number is: " << this->num.getVal() << std::endl;
}

