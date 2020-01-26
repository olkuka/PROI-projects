// Patryk Dobrowolski, Aleksandra Kukawka
// coordinator: mgr Wiktor Kuśmirek
// medical clinic
//

#include "Patient.hpp"
#include "utilities.hpp"

void Patient::newPatient()
{
        try {
        Person::newPerson();
    }
    catch(const std::invalid_argument& exc) {
        std::cout << exc.what() << std::endl;
        bool isCorrect = false;
        int age {0};
        while (!isCorrect) {
            std::cin >> age;
            if (std::cin.good()) {
                isCorrect = true;
                Person::setAge(age);
            }
            else {
                isCorrect = false;
                clearBuffer();
                std::cout << "Try again!\n";
            }
        }
    }
    
    std::cout << "\n";
}


void Patient::infoPerson()
{
    std::cout << "PATIENT \n";
    Person::infoPerson();
    std::cout << "-----------" << std::endl;

}

Patient Patient::operator++ ()
{
    int age = Person::getAge();
    age++;
    return *this;
}

template <typename T>
bool isAdult (T age)
    {
        if (age >=18)
            return 1;
    }
