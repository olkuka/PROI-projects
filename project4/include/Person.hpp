// Aleksandra Kukawka
// coordinator: mgr Wiktor Kuśmirek
// medical clinic
//

#ifndef PERSON_HPP
#define PERSON_HPP

#include<iostream>
#include<string>

class Person
{
    std::string name;
    std::string lastName;
    int age;

public: 
    Person(std::string name, std::string lastName, int age);
    Person();
    virtual ~Person() {};
    void newPerson();
    virtual void infoPerson();
    std::string getName();
    std::string getLastName();
    int getAge();
    void setName(std::string);
    void setLastName(std::string);
    void setAge(int);
    Person operator++();	// increase age of person
};


#endif
