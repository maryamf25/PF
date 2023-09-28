#include <iostream>
using namespace std;
void stickers(int sides);
main(){
	int sides;
	cout << "Enter the side length of the Rubik's Cube: ";
	cin>> sides;
	stickers(sides);
	
	}

	void stickers(int sides){
	int stickers= sides*sides*6;
	cout << "Number of stickers needed: "<<stickers;

}	