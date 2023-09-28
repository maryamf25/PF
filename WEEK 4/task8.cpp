#include <iostream>
using namespace std;
	void discount(string day,float amount){
	

	if(day=="Sunday"){
	amount=amount-(0.1*amount);
	}
	cout << "Payable Amount: $"<< amount;
 	}

main(){
	float amount;
	string day;
	
	cout << "Enter the day of purchase: ";
	cin>> day;
	
	cout << "Enter the total purchase amount: $";
	cin>> amount;
	discount(day,amount);
	
	
	}
