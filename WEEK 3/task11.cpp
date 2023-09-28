#include <iostream>
using namespace std;
main(){
	
	
	cout<< "Enter the current world population: " ;
	
	int m,d,p;
	cin>> p;
	cout<< "Enter the monthly birth rate (number of births per month): " ;
	cin>> m;
	d= m*360+p;
	cout<< "The population in three decades will be: "<<d;




}