// Patryk Dobrowolski, Aleksandra Kukawka
// coordinator: mgr Wiktor Kuśmirek
// medical clinic
//

#include "Doctor.hpp"
#include "utilities.hpp"

template <class T>
void Doctor<T>::newDoctor()
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

    std::cout << "years of experience: ";
    std::cin >> exp;
    if (!cin.good()) {
        std::cout << "This is NOT a number!\nExperience set default to 0.\n";
        clearBuffer();
    }
    std::cout << "\n";
}

template <class T>
void Doctor<T>::infoDoctor()
{
    std::cout << "DOCTOR \n";
    Person::infoPerson();
    std::cout << "years of experience: " << exp << std::endl;
    std::cout << "-----------" << std::endl;
}

template class Doctor<int>;
template class Doctor<short int>;