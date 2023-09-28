#include <iostream>
using namespace std;
void fuel(float distance);
main(){
	float distance;
	cout << "Enter the distance: ";
	cin>> distance;
	fuel(distance);
	
	}

	void fuel(float distance){	
	
	float req_fuel= distance*10;
	if(req_fuel>=100){
	cout << "Fuel needed: "<<req_fuel;

	}
	if(req_fuel<100){
	cout << "Fuel needed: 100";

}}