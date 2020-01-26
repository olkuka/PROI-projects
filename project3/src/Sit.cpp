/*
    Name: Aleksandra Kukawka
    Index number: 300246
    Coordinator: mgr Wiktor Kuśmirek
*/

#include <iostream>
#include <string>
#include "Sit.h"

Sit::Sit(int row1, int number1, bool booked1) {
	this->row = row1;
	this->number = number1;
	this->booked = booked1;
}

void Sit::setBooking(bool temp) {
	this->booked = temp;
}

bool Sit::isBooked() {
	return this->booked;
}

void Sit::book() {
	std::string name, surname;
	if (this->booked) {
		std::cout << "This sit is taken.\n";
	}
	else {

		std::cout << "Your name (or a first letter of your name): ";
		client.setName();
		std::cout << "Your surname (or a first letter of your surname): ";
		client.setSurname();
		setBooking(true);
	}
}

void Sit::cancel() {
	if (this->booked) {
		client = Client<std::string>();
		setBooking(false);
	}
}

void Sit::showBooking() {
	if (isBooked()) {
		std::cout << "\nSit number " << this->number << " in a row " << this->row << " is booked for ";
		client.showFullName();
	}
	else std::cout << "\nSit number " << this->number << " in a row " << this->row << " is available.\n";
}

Client <std::string> Sit::getClient() {
	return this->client;
}