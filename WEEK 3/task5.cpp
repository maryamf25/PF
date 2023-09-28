#include <iostream>
using namespace std;
main(){
	
	
	cout<< "Enter the student's name: " ;
	string name;
	cin>> name;
	cout<< "Enter matriculation marks (out of 1100): " ;
	float marks;
	cin>> marks;
	cout<< "Enter intermediate marks (out of 550): " ;
	float marks2;
	cin>> marks2;
	cout<< "Enter Ecat marks (out of 400): " ;
	float marks3;
	cin>> marks3;
        float agg= (0.1*(marks/1100*100))+(0.4*(marks2/550*100))+(0.5*(marks3/400*100));
	cout<< "Aggregate score for "<< name<< " in UET is: "<<agg <<"%";




}