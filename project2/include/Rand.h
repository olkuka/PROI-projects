/*
    Name: Aleksandra Kukawka
    Index number: 300246
    Coordinator: mgr Wiktor Kuśmirek
*/

#ifndef RAND_H
#define RAND_H

#include "Number.h"

class Rand {
	public:
		Rand() : num(0) {}
		void randNumber();
		bool checkParity();
		void displayRand();

	private:
		Number num;
};

#endif //RAND_H
