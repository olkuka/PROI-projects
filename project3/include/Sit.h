/*
    Name: Aleksandra Kukawka
    Index number: 300246
    Coordinator: mgr Wiktor Kuśmirek
*/

#ifndef SIT_H
#define SIT_H

#include <iostream>
#include <string>
#include "Client.h"

class Sit{
	public:
		Sit(): client(), row(0), number(0), booked(false) {}
		Sit(int row, int number, bool booked);

		void book();
		void cancel();
		void showBooking();
		bool isBooked();
		Client <std::string> getClient();

	private: 
		Client <std::string> client;
		int row;
		int number;
		bool booked;
		void setBooking(bool);
};

#endif	//SIT_H