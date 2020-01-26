/*
    Name: Aleksandra Kukawka
    Index number: 300246
    Coordinator: mgr Wiktor Kuśmirek
*/

#ifndef NUMBER_H
#define NUMBER_H

// class which contains number and operations which can be done on it
class Number {
	public: 
		Number(int val);				// constructor
		int getVal();	

		void operator =(Number n);		// = operator

		Number operator +(Number n);	// + operator 
		Number operator -(Number n);	// - operator
		Number operator *(Number n);	// * operator
		Number operator /(Number n);	// / operator
		bool operator >(Number n);		// > operator
		bool operator !=(Number n);		// != operator
		bool operator %(Number n);		// mod operator

	private:
		int number;						// number in decimal system
};

#endif //NUMBER_H
