/*
    Name: Aleksandra Kukawka
    Index number: 300246
    Coordinator: mgr Wiktor Kuśmirek
*/

#ifndef CINEMA_H
#define CINEMA_H

#include <iostream>
#include <string>
#include <vector>
#include "Sit.h"
#include "Client.h"

class Cinema {
	public: 
		Cinema();
		void showCinemaHall();
		void pickYourSit(std::string, int&, int&);
		void addBooking();
		void cancelBooking();
		void checkBooking();
		void showListOfViewers();
		void removeFromVector(Client <std::string>);

	private:
		static const int rows {10};
		static const int nums {20};

		Sit cinema_hall[rows][nums];
		std::vector <Client<std::string> > listOfViewers;
};

#endif