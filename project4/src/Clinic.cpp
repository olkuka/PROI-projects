// Patryk Dobrowolski, Aleksandra Kukawka
// coordinator: mgr Wiktor Kuśmirek
// medical clinic
//

#include "Clinic.hpp"
#include <cctype>

using namespace std;

Clinic::~Clinic()
{
    delete[] dArray;
    delete[] rArray;
}

void Clinic::addPatient()
{
    Patient p;
    p.newPatient();
    patientList.push_back(p);
}

void Clinic::addPatient(int num)
{
    Patient p;
    for (int i = 0; i < num; ++i)
    {
        cout << "Patient " << i+1 << ": \n";
        p.newPatient();
        patientList.push_back(p);
    }
}

void Clinic::showPatients()
{
    cout << endl;
    vector<Patient>::iterator it;
    for (it = patientList.begin(); it != patientList.end(); ++it)
    {
        it->infoPerson();
        cout << endl;
    }
}

void Clinic::addDoctorList()
{
    cout << "insert no. of doctors: ";
    cin >> dnum;
    if (cin.good()) {
        dArray = new Doctor<int>[dnum];
        for (int i = 0; i < dnum; ++i)
        {
            cout << "Doctor " << i+1 << ": \n";
            dArray[i].newDoctor();
        }
    }
    else {
        throw std::invalid_argument("This is NOT a number!"); 
    }
}

void Clinic::showDoctors()
{
    for (int i = 0; i < dnum; ++i)
    {
        dArray[i].infoDoctor();
    }
}

void Clinic::addResidentList()
{
    cout << "insert no. of residents: ";
    cin >> rnum;
    rArray = new Doctor<short int>[rnum];
    for (int i = 0; i < rnum; ++i)
    {
        cout << "Resident " << i+1 << ": \n";
        rArray[i].newDoctor();
    }
}

void Clinic::showResidents()
{
    for (int i = 0; i < rnum; ++i)
    {
        rArray[i].infoDoctor();
    }
}
