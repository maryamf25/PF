#include <iostream>

using namespace std;

float lowestPrice(int km, string period);


main()
{
   float km ,ans;
   string period;

    cout << "Enter the number of kilometers: ";
    cin >> km;
    cout << "Enter the period of the day (day/night): ";
    cin >> period;
    

    ans =lowestPrice(km,period);
    cout << "Lowest price for "<< km << " kilometers: "<<ans << " EUR";
}

float lowestPrice(int km, string period)
{
    float result ;
    float price;
    
    if (km <=20 && period == "day")
    {
        result= (0.79*km)+0.70;
    }
     if (km <=20 && period == "night")
    {
        result= (0.90*km)+0.70;
    }
    if (km > 20 && km < 100 )
    {
        price = 0.09;
        result= price*km;
    }
     if (km >=100)
    {
        price = 0.06;
        result= price*km;
    }
   
    return result;
    
   }