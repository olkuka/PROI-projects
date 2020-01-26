// Patryk Dobrowolski, Aleksandra Kukawka
// coordinator: mgr Wiktor Kuśmirek
// medical clinic
//

#ifndef CLINIC_HPP
#define CLINIC_HPP

#include <iostream>
#include <vector>
#include "Doctor.hpp"
#include "Patient.hpp"

class Clinic
{
    
    int dnum, rnum;                   //consecutively number of doctors, number of residents (arr size)
    std::vector<Patient> patientList; //patient list stored as vector
    Doctor<int> *dArray;
    Doctor<short int> *rArray;

public:
    ~Clinic();

    void addPatient();        // insert new patient in container
    void addPatient(int num); // insert num of new patients
    void showPatients();      // show list of patients
    void addDoctorList();     // initialise dynamic array of doctors
    void showDoctors();
    void addResidentList(); // initialise dynamic array of doctors
    void showResidents();
};

#endif