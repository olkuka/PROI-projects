// Patryk Dobrowolski, Aleksandra Kukawka
// coordinator: mgr Wiktor Kuśmirek
// medical clinic
//

#define BOOST_TEST_MODULE Person_test
#include <boost/test/included/unit_test.hpp>

#include "Person.hpp"
#include "Patient.hpp"
#include <iostream>
#include <sstream>

using namespace boost::unit_test;

BOOST_AUTO_TEST_CASE(constructor_test) {
	std::string name[] = {"Jan", "Aleksandra", "$&%*&%*^"};
	std::string lastName[] = {"Kowalski", "56756", " "};
	int AGE[3] = {-162, 234, 1000000};

	for (int i = 0; i < 3; i++) {
		Person newP(name[i], lastName[i], AGE[i]);
		BOOST_CHECK_EQUAL(newP.getName(), name[i]);
		BOOST_CHECK_EQUAL(newP.getLastName(), lastName[i]);
		BOOST_CHECK_EQUAL(newP.getAge(), AGE[i]);
	}
}

BOOST_AUTO_TEST_CASE(infoPersonFunction_test) {
	std::string name = "Aleksandra";
	std::string lastName = "Kukawka";
	int age {19};
	std::string output;
	std::ostringstream class_output;

        Person *newP = new Patient(name, lastName, age);
        output = "PATIENT \n" + name + " " + lastName + "\nage: " + std::to_string(age) + "\n-----------\n";

	auto cout_buff = std::cout.rdbuf();
	std::cout.rdbuf(class_output.rdbuf());

        newP->infoPerson();
	std::cout.rdbuf(cout_buff);

	BOOST_CHECK_EQUAL(class_output.str(), output);
        delete newP;
}
