#include <iostream>
using namespace std;
main(){
	
	
	cout<< "Enter the name of the cricket team: " ;
	string team;
	cin>> team;
	cout<< "Enter the number of wins: " ;
	int w, d,l,p;
	cin>> w;
	cout<< "Enter the number of draws: " ;
	cin>> d;
	cout<< "Enter the number of losses: " ;
	cin>> l;
	p= (w*3)+(d*1)+(l*0);
	cout<< team<<" has obtained "<<p <<" points in the Asia Cup tournament.";




}