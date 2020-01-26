/*
    Name: Aleksandra Kukawka
    Index number: 300246
    Coordinator: mgr Wiktor Kuśmirek
*/

#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "Number.h"
#include <string>

class Calculator {
    public:
    	Calculator() : num1(0), num2(0), sign(0), result(0) {}      // initialization list
        void readValues();
        void calculate();
        void displayResult();
        int binDec(std::string val);                                // method which changes bin to dec
        std::string binDec(int val);                                // method which changes dec to bin

    private:
        Number num1;
        Number num2;
        char sign;
        Number result;
};

#endif //CALCULATOR_H
