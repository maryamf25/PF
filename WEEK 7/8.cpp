#include <iostream>
#include <cmath>
using namespace std;

float calculateMoney(int age, int priceOfMachine, int priceOfToy);
main()
{
    int age, priceOfMachine, priceOfToy;
    float  result, output;

    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    cin >> priceOfMachine;
    cout << "Enter the unit price of each toy: ";
    cin >> priceOfToy;

    result = calculateMoney(age, priceOfMachine, priceOfToy);
    if (priceOfMachine >= result)
    {
        output = priceOfMachine - result;
        cout << "No!" << endl
             << output;
    }
    if (result > priceOfMachine)
    {
        output = result - priceOfMachine;
        cout << "Yes!" << endl
             << output;
    }
}
float calculateMoney(int age, int priceOfMachine, int priceOfToy)
{
   
        int evenBirthdays = age / 2;
        int oddBirthdays = age / 2 + (age%2);
   

    float amountOnEvenBdy = 0;
    float totalAmountreceived = 0;

    for (int x = 1; x <= evenBirthdays; x++)
    {
        amountOnEvenBdy = amountOnEvenBdy + 10;
        totalAmountreceived = totalAmountreceived + amountOnEvenBdy;
        totalAmountreceived = totalAmountreceived - 1;
    }

    

    float AmountBySellingToys = oddBirthdays * priceOfToy;

    float savings = AmountBySellingToys + totalAmountreceived;

    return savings;
}