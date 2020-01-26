/*
    Name: Aleksandra Kukawka
    Index number: 300246
    Coordinator: mgr Wiktor Kuśmirek
*/

#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>

template <typename T>
class Client{
	public:
		Client();
		void setName();
		void setSurname();
		T getName();
		T getSurname();
		void showFullName();
		void showFullName(T*, T*);

		bool operator==(Client<T> c) {
			bool res = ((this->getName() == c.getName()) and (this->getSurname() == c.getSurname()));
			return res;
		}
		
	private:
		T name;
		T surname;
};

template <typename T>
Client<T>::Client() {
	this->name = "";
	this->surname = "";
}

template<typename T>
T Client<T>::getName() {
	return this->name;
}

template<typename T>
T Client<T>::getSurname() {
	return this->surname;
}

template<typename T>
void Client<T>::setName() {
	T name;
	std::cin >> name;
	this->name = name;
}

template<typename T>
void Client<T>::setSurname() {
	T surname;
	std::cin >> surname;
	this->surname = surname;
}

template<typename T>
void Client<T>::showFullName() {
	std::cout << this->name << " " << this->surname;
}

template <typename T>
void Client<T>::showFullName(T *t1, T *t2) {
	*t1 = this->name;
	*t2 = this->surname;
}

#endif	//CLIENT_H