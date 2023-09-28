#include <iostream>
using namespace std;
	void discount(string day,float amount){
	

	if(day=="Sunday"){
	amount=amount-(0.1*amount);
	}
	if(day!="Sunday"){
	amount=amount-(0.05*amount);
	}
	cout << "Payable Amount: $"<< amount;
 	}

main(){ while(true){
	float amount;
	string day;
	
	cout << "Enter the day of purchase: ";
	cin>> day;
	
	cout << "Enter the total purchase amount: $"<<endl;
	cin>> amount;
	discount(day,amount);
	
}	
	}
