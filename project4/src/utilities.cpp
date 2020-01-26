// Patryk Dobrowolski, Aleksandra Kukawka
// coordinator: mgr Wiktor Kuśmirek
// medical clinic
//

#include "utilities.hpp"
#include <iostream>
#include "Clinic.hpp"
#include "Person.hpp"

void clearBuffer() {
    cin.clear();
    cin.ignore(1000, '\n');
}

void addDoctorList(Clinic* clinic) {
	bool isCorrect = false;

	while (!isCorrect) {
		try {
			isCorrect = true;
			clinic->addDoctorList();
		}
		catch (const std::invalid_argument& exc) {
			isCorrect = false;
			cout << exc.what() << endl;
			cout << "Try again!\n\n";
			clearBuffer();
		}
	}
}

void addResidentList(Clinic* clinic) {
	bool isCorrect = false;

	while (!isCorrect) {
		try {
			isCorrect = true;
			clinic->addResidentList();
		}
		catch (const std::invalid_argument& exc) {
			isCorrect = false;
			cout << exc.what() << endl;
			cout << "Try again!\n\n";
			clearBuffer();
		}
	}
}
