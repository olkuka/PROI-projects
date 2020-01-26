/*
    Name: Aleksandra Kukawka
    Index number: 300246
    Coordinator: mgr Wiktor Kuśmirek
*/

#include <iostream>
#include "Sit.h"
#include "Cinema.h"

using namespace std;

void menu() {
	cout << "\n      * * * * * Welcome to cinema electronic ticket system * * * * *      \n\n";
	cout << "What do you want to do? Choose your option. \n";
	cout << " 1. Book a sit.\n";
	cout << " 2. Cancel your booking.\n";
	cout << " 3. Check your booking.\n";
	cout << " 4. Show cinema hall plan.\n";
	cout << " 5. Show all viewers going to watch this movie.\n";
	cout << " 6. Close the app.\n";
}

int main() {
	Sit booking;
	Cinema* cinema = new Cinema;
	int answer {0};

	do {
		menu();
		cin >> answer;
		if (answer == 1) cinema->addBooking();
		else if (answer == 2) cinema->cancelBooking();
		else if (answer == 3) cinema->checkBooking();
		else if (answer == 4) cinema->showCinemaHall();
		else if (answer == 5) cinema->showListOfViewers();
		else if (answer != 6) cout <<"Try again, I do not know such an option.\n";
	} while (answer != 6);
	
	delete cinema;

	return 0;
}
