// Patryk Dobrowolski, Aleksandra Kukawka
// coordinator: mgr Wiktor Kuśmirek
// medical clinic
//

#include <iostream>
#include "Person.hpp"
#include "Patient.hpp"
#include "Clinic.hpp"
#include "Doctor.hpp"
#include "utilities.hpp"

using namespace std;

int main() 
{
	int menu;
	Clinic *clinic = new Clinic;

	addDoctorList(clinic);
	addResidentList(clinic);


	do 
	{
		cout<< "choose an action:"<< endl
			<< "1. add patient"<< endl
			<< "2. add n patients"<< endl
			<< "3. show patients' list"<< endl
			<< "4. show residents' list"<< endl
			<< "5. show doctors' list"<< endl
			<< "6. quit" << endl << endl;
		cin >> menu;
			switch(menu)
			{
				case 1:
					clinic->addPatient();
					break;
				case 2:
					int n;
					cout <<"insert n: ";
					cin >> n;
					clinic->addPatient (n);
					break;
				case 3:
					clinic->showPatients();
					break;
				case 4:
					clinic->showResidents();
					break;
				case 5:
					clinic->showDoctors();
					break;
				case 6:
					break;
				default:
					cout << "unknown command";
					break;
			}
		cout << endl << endl;

	} while (menu > 0 and menu < 6);

	if (menu == 6) cout << "Thank you for using my program. Bye!\n";

	delete clinic;
	
	return 0;
}