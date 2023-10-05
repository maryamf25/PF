#include <iostream>
#include<cmath>
using namespace std;

float height(float distance, float angle);

main(){
    float distance, angle ,result;
    cout<<"Enter the distance from the base of the tree (in feet): "; 
    cin>>distance;
    cout<<"Enter the angle of elevation (in degrees): "; 
    cin>>angle;
    result = height(distance, angle);
}
   float height(float distance, float angle)
    {
            float radian= angle/ 57.2958;
    cout<< "The height of the tree is: " << tan(radian)*distance << " feet";

    }