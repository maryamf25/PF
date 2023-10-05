#include <iostream>
using namespace std;
string timetravel(int hours,int min);

main(){
    int hours;
    int min;
    string future;
    cout<<"Enter Hours: "; 
    cin>>hours;
     cout<<"Enter Minutes: "; 
    cin>>min;
    future = timetravel(hours,min);
    cout<<future;
}
string timetravel(int hours,int min)
{
    int mins = min + 15;
    if(mins>=60){
        hours = hours +1;
        mins = mins-60;
        
    }
   
    string result = to_string(hours) + ":" + to_string(mins);

    return result;
    
    
}