#include <iostream>
using namespace std;
void name(string username){	
	
		while(true){

	if(username=="Kaka"){
	cout <<username<<endl;
	}
	if(username!="Kaka"){
	
	cout << "Enter name: ";
	cin>> username;
	
	}
}
	
	
}

main(){
	string username;
	cout << "Enter name: ";
	cin>> username;
	while(true){
	name(username);
	}
	


}