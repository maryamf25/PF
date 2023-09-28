#include <iostream>
using namespace std;
void measurement(float inches);
main(){
	float inches;
	cout << "Enter the measurement in inches: ";
	cin>> inches;
	measurement(inches);
	
	}

	void measurement(float inches){
	float feet= inches/12;
	cout << "Equivalent in feet: "<<feet;

	}