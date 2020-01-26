// Patryk Dobrowolski, Aleksandra Kukawka
// coordinator: mgr Wiktor Kuśmirek
// medical clinic
//

#ifndef PATIENT_HPP
#define PATIENT_HPP

#include <iostream>
#include <string>
#include "Person.hpp"

class Patient: public Person
{
public: 
    Patient(): Person() {}
    Patient(std::string name, std::string lastName, int age): Person(name, lastName, age) {}
    ~Patient() {};
    void newPatient();
    void infoPerson();

    Patient operator++();	// increase age of patient
    template <typename T>
    bool isAdult (T age);
};


#endif
