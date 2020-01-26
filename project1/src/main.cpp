/*
    Name: Aleksandra Kukawka
    Index number: 300246
    Coordinator: mgr Wiktor Kuśmirek
*/

#include <iostream>

using namespace std;

int add(int num1, int num2) {
	return num1 + num2;
}

int main() {
	int num1 {};
	int num2 {};

	cout << "Enter first number: ";
	cin >> num1;
	cout << "\nEnter second number: ";
	cin >> num2;
	cout << "\n" << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	return 0;
}
