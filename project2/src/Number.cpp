/*
    Name: Aleksandra Kukawka
    Index number: 300246
    Coordinator: mgr Wiktor Kuśmirek
*/

#include <iostream>
#include "Number.h"

Number::Number(int val) {
    this->number = val;  
}                               

int Number::getVal() {
    return this->number;
}

void Number::operator =(Number n) {
    this->number = n.getVal();
}

Number Number::operator +(Number n) {                       //operator + returns a new object of Number class which contains a result
    Number res = Number(this->getVal() + n.getVal());
    return res;
}

Number Number::operator -(Number n) {
    Number res = Number(this->getVal() - n.getVal());
    return res;
}

Number Number::operator *(Number n) {
    Number res = Number(this->getVal() * n.getVal());
    return res;
}

Number Number::operator /(Number n) {
    Number res = Number(this->getVal() / n.getVal());
    return res;
}

bool Number::operator >(Number n) {
    bool res = (this->getVal() > n.getVal());
    return res;
}

bool Number::operator !=(Number n) {
    bool res = (this->getVal() != n.getVal());
    return res;
}

bool Number::operator %(Number n) {
    bool res = (this->getVal() % n.getVal());
    return res;
}
