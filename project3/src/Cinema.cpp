/*
    Name: Aleksandra Kukawka
    Index number: 300246
    Coordinator: mgr Wiktor Kuśmirek
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include "Cinema.h"
#include "Sit.h"

Cinema::Cinema() {

	for (size_t i = 0; i < this->rows; i++) 
		for (size_t j = 0; j < this->nums; j++) {
			this->cinema_hall[i][j] = Sit(i+1, j+1, false);
	}
}

void Cinema::showCinemaHall() {
	std::cout << "   ";
	for (size_t i = 0; i < this->nums; i++) std::cout << std::setw(3) << i+1;
		std::cout << "\n";
	for (size_t i = 0; i < this->rows; i++) {
		std::cout << std::setw(3) << i+1;
		for (size_t j = 0; j < this->nums; j++) {
			if (this->cinema_hall[i][j].isBooked()) std::cout << std::setw(3) << "x";
			else std::cout<< std::setw(3) << "o";
		}
		std::cout << "\n";
	}
}

void Cinema::pickYourSit(std::string comment, int &row, int &num) {
	std::cout << comment << "\n";
	std::cout << "Row: ";
	do {
		std::cin >> row;
		if (row < 0 or row > rows) std::cout << "Try again.\n";
	} while (row < 0 or row > rows);

	std::cout << "Number: ";
	do {
		std::cin >> num;
		if (num < 0 or num > nums) std::cout << "Try again.\n";
	} while (num < 0 or num > nums);
}

void Cinema::removeFromVector(Client<std::string> c) {
	std::vector<Client<std::string>>::iterator it;
	it = std::find(this->listOfViewers.begin(), this->listOfViewers.end(), c);
	if (it != this->listOfViewers.end())
		this->listOfViewers.erase(it);
	else std::cout << "This sit is available. You cannot cancel this reservation.\n";
}

 void Cinema::addBooking() {
        int row {0}, num {0};
        showCinemaHall();
        pickYourSit("Where do you want to sit?", row, num);
        this->cinema_hall[row-1][num-1].book();
        this->listOfViewers.push_back(cinema_hall[row-1][num-1].getClient());
 }
        
void Cinema::cancelBooking() {
		int row {0}, num {0};
        showCinemaHall();
        pickYourSit("What sit do you want to cancel?", row, num);
        removeFromVector(this->cinema_hall[row-1][num-1].getClient());
        this->cinema_hall[row-1][num-1].cancel();

 }

void Cinema::checkBooking() {
		int row {0}, num {0};
        pickYourSit("What sit do you want to check?", row, num);
        this->cinema_hall[row-1][num-1].showBooking();
}

void Cinema::showListOfViewers() {

	for (std::vector<Client<std::string>>::iterator it=this->listOfViewers.begin(); it!=this->listOfViewers.end(); it++){
            it->showFullName();
            std::cout << "\n";
	}
}
