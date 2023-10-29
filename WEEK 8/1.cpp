#include<iostream>
using namespace std;

string canFit(float brickHeight,float  bricklength, float brickDepth, float holeHeight, float holeWidth);

main(){
    float brickHeight,  bricklength,  brickDepth,  holeHeight,  holeWidth;
    cout << "Enter height of the brick: ";
    cin >> brickHeight;
     cout << "Enter length of the brick: ";
    cin >> bricklength;
     cout << "Enter depth of the brick: ";
    cin >> brickDepth;
     cout << "Enter height of the hole: ";
    cin >> holeHeight;
     cout << "Enter width of the hole: ";
    cin >> holeWidth;
    string output = canFit( brickHeight,  bricklength,  brickDepth,  holeHeight,  holeWidth);
  cout << output;
    


}
string canFit(float brickHeight,float  bricklength, float brickDepth, float holeHeight, float holeWidth){
     float holeSize = holeHeight*holeHeight;
     if((brickDepth*brickHeight ==holeSize) || (brickDepth*bricklength ==holeSize) || (brickHeight*bricklength ==holeSize) || 
     (brickDepth*brickHeight*bricklength)==holeSize){
        return "true";
     }
     else {
        return "false";
     }
}
