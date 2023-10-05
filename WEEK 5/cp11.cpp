#include <iostream>
using namespace std;
string calculatePoolState( int volume,int flowrate1 ,int flowrate2,float outingHours);

main(){
    int volume, flowrate1 , flowrate2;
    float outingHours;
    cout<<"Enter volume of the pool in liters: "; 
    cin>>volume;
    cout<< "Enter flow rate of the first pipe per hour: ";
    cin>> flowrate1;
    cout << "Enter flow rate of the second pipe per hour: ";
    cin >>flowrate2;
    cout<<"Enter hours that the worker is absent: ";
    cin>> outingHours;
    string answer = calculatePoolState(  volume,flowrate1 ,flowrate2, outingHours);
    cout<< answer;
}
string calculatePoolState( int volume,int flowrate1 ,int flowrate2,float outingHours)
{   
     string result;
     float filledByp1= flowrate1*outingHours;
     float filledByp2= flowrate2*outingHours;
     int percentageFill= ((filledByp1 + filledByp2)/volume)*100;
     int totalfill= filledByp1 + filledByp2;
     int contributionOfp1= (filledByp1/totalfill)*100;
     int contributionOfp2= (filledByp2/totalfill)*100;
     int overflow = totalfill-volume;
     if(totalfill>volume){
    
      cout<<"For "<< outingHours<<" hours, the pool overflows with "<< overflow<< " liters.";

     }
      if(totalfill<=volume){
      result = "The pool is " + to_string(percentageFill) + "% full. Pipe 1: " + to_string(contributionOfp1) + "%. Pipe 2: "+ to_string(contributionOfp2) + "%." ;
      }
     return result; 

}