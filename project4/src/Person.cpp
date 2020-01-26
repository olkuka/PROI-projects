// Aleksandra Kukawka
// coordinator: mgr Wiktor Kuśmirek
// medical clinic
//

#include <iostream>
#include <string>
#include "Person.hpp"

Person::Person(std::string name, std::string lastName, int age){
	this->name = name;
	this->lastName = lastName;
	this->age = age;
}

Person::Person() {
	this->name = "d e f a u l t";
	this->lastName = "d e f a u l t";
	this->age = 0;
}

void Person::newPerson() {
	std::string s {};
	int a {0};
	std::cout << "first name: ";
    std::cin >> s;
    setName(s);
    std::cout << "last name: ";
    std::cin >> s;
    setLastName(s);
    std::cout << "age: ";
    std::cin >> a;
    if (std::cin.good()) setAge(a);
    else {
    	throw std::invalid_argument("This is NOT a number!");
    }
    //std::cout << std::endl;
}

void Person::infoPerson() {
	std::cout << this->name << " " << this->lastName;
    std::cout << "\nage: " << this->age << std::endl;
}

std::string Person::getName() {
	return this->name;
}

std::string Person::getLastName() {
	return this->lastName;
}

int Person::getAge() {
	return this->age;
}

void Person::setName(std::string s) {
	this->name = s;
}

void Person::setLastName(std::string s) {
	this->lastName = s;
}

void Person::setAge(int a) {
	this->age = a;
}