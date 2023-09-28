#include <iostream>
using namespace std;
	void cal(float num1,float num2,char op){
	while(true){

	if(op== '+'){
	float sum=num1+num2;
	cout << "Sum: "<<sum;
	}

	if(op== '-'){
	float Subtraction=num1-num2;
	cout << "Subtraction: "<<Subtraction;
	}

	if(op== '*'){
	float Multiplication=num1*num2;
	cout << "Multiplication: "<<Multiplication;
	}
	
	if(op== '/'){
	float Division=num1/num2;
	cout << "Division: "<<Division;
	}
	}
}
main(){
	float num1,num2;
	char op;
	cout << "Enter 1st number: ";
	cin>> num1;
	cout << "Enter 2nd number: ";
	cin>> num2;
	cout << "Enter an operator (+, -, *, /): ";
	cin>> op;
	cal(num1,num2,op);
	
	
	}