// Patryk Dobrowolski, Aleksandra Kukawka
// coordinator: mgr Wiktor Kuśmirek
// medical clinic
//

#ifndef DOCTOR_HPP
#define DOCTOR_HPP

#include <iostream>
#include <string>
#include "Person.hpp"

using namespace std;

template <class T> //experience of residents is stored in short int
class Doctor: public Person
{
    T exp; //experience in hours

public:
    Doctor(): Person() {}
    Doctor(std::string name, std::string lastName, int age, T exp): Person(name, lastName, age) {}
    ~Doctor() {};
    void newDoctor();
    void infoDoctor();
};

#endif