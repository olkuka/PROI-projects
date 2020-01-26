/*
    Name: Aleksandra Kukawka
    Index number: 300246
    Coordinator: mgr Wiktor Kuśmirek
*/

#include <iostream>
#include "Calculator.h"
#include "Number.h"
#include "Rand.h"

int main() {

    Calculator calc = Calculator();
    Rand rand = Rand();

    calc.readValues();
    rand.randNumber();
    if (!rand.checkParity()) {
   	 	calc.calculate();
    	calc.displayResult();
	}
	else 
		rand.displayRand();

	return 0;
}
