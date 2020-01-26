/*
    Name: Aleksandra Kukawka
    Index number: 300246
    Coordinator: mgr Wiktor Kuśmirek
*/

#include <iostream>
#include <string>
#include <algorithm> // string reverse
#include <cmath>
#include "Calculator.h"


int Calculator::binDec(std::string val) {
    int res {};
    size_t valSize = val.size();
    for (size_t i = 0; i < valSize; i++)
        res += (val[valSize - 1 - i] - '0') * pow(2, i);			// Horner's method for changing bin to dec
    return res;
}

std::string Calculator::binDec(int val) {
    std::string res;
    do {
        res += val%2 + '0';
        val = val/2;
    } while (val != 0);

    return res;
}

void Calculator::readValues() {
    std::cout << "Enter the first value in binary system: ";

    std::string val1, val2;
    std::cin >> val1;

    int val1dec = binDec(val1);
    this->num1 = Number(val1dec);

    std::cout << "\nEnter the second value in binary system: ";
    std::cin >> val2;

    int val2dec = binDec(val2);
    this->num2 = Number(val2dec);

    std::cout << "\nEnter the type of operation (+, -, *, /): ";
    std::cin >> this->sign;
}

void Calculator::calculate() {
    if (sign == '+') {
        this->result = this->num1 + this->num2;
    }
    else if (sign == '-') {
    	if (num2 > num1) {											// in case if num1 is smaller than num2
    		std::swap(num1, num2);									// swapping this two numbers to avoid negative numbers
    		std::cout << "I'm swapping numbers because the first is smaller than the second...";
    	}

        this->result = this->num1 - this->num2;
    }
    else if (sign == '*') {
        this->result = this->num1 * this->num2;
    }
    else if (sign == '/') {
    	if (num2 != 0) 
    		this->result = this->num1 / this->num2;
   		else 
   			std::cout << "You're not allowed to divide by 0!";

    }
    else std::cout << "I don't know this sign.\n";
}

void Calculator::displayResult() {
    int val = this->result.getVal();
    std::string res = binDec(val);
    std::reverse(res.begin(), res.end());

    std::cout << "\nThe result is: " << res << std::endl;

}
