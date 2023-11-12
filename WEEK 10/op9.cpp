#include <iostream>
using namespace std;
bool canPayWithChange(double change[], double totalDue);

main()
{
    double quarters, dimes, nickels, pennies, amountDue, change[3],totalDue;
    cout << "Enter quarters: ";
    cin >> quarters;
    change[0] = quarters*0.25;
    cout << "Enter dimes: ";
    cin >> dimes;
    change[1] = dimes*0.10;
    cout << "Enter nickels: ";
    cin >> nickels;
    change[2] = nickels*0.05;
    cout << "Enter pennies: ";
    cin >> pennies;
    change[3] = pennies*0.01;
    cout << "Enter the total amount due: $";
    cin >> totalDue;
    
    
    
    bool result = canPayWithChange( change,  totalDue);
    cout << "Can you pay the amount? ";
    if(result==1){
        cout << "Yes";
    }
    else if(result==0){
        cout << "No";
    }
}
bool canPayWithChange(double change[], double totalDue){
 
    double sum = 0.0;
    for (int m = 0; m < 4; m++)
    {
        sum = sum + change[m];
    }
    if(sum>=totalDue){
        return true;
    }
    else{
        return false;
    }

}