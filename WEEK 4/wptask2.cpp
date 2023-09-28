#include <iostream>
using namespace std;
void add(float num1, float num2);	

main(){
	
	add(num1,num2);

}
	void add(float num1, float num2){
	float num1,num2;
	cout<<"Enter 1st number: ";
	cin>> num1;
	cout<<"Enter 2nd number: ";
	cin>> num2;

	float sum;
	sum=num1+num2;
	cout<< "Sum: "<<sum;

}