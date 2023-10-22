#include <iostream>
#include <cmath>
using namespace std;

float calculatePrice(float money, int year);
main()
{
    int year;
    float money, output;

    cout << "Enter Money: ";
    cin >> money;
    cout << "Enter Year: ";
    cin >> year;

    float result = calculatePrice(money, year);

    if (money >= result)
    {
        output = money - result;
        cout << "Yes! He will live a carefree life and will have " << output << " dollars left." << endl;
    }
    if (result > money)
    {
        output = result - money;
        cout << "He will need " << output << " dollars to survive." << endl;
    }
}
float calculatePrice(float money, int year)
{
    float x,  evenYears , oddYears;
    if(year%2==0){
        evenYears = (year - 1800) / 2 + 1;
        oddYears = (year - 1800) / 2;
    }
    else{
        evenYears = (year - 1800) / 2 + 1;
        oddYears = (year - 1800) / 2 + 1;
    }
    

    float evenSpent = 0.0;
    float oddSpent = 0.0;
    for (float x = 1; x <= oddYears; x++)
    {
        oddSpent = oddSpent + (12000 + 50 * (18 + oddYears));
    }

    for (float x = 1; x <= evenYears; x++)
    {
        evenSpent = evenSpent + 12000;
    }
    x = evenSpent + oddSpent;
    return x;
}
