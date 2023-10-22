#include <iostream>
using namespace std;

int frequencyChecker(int number, int digit);
main()
{
    int number, digit;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit to check: ";
    cin >> digit;
    int ans = frequencyChecker(number, digit);
    cout << "Frequency: " << ans;
}
int frequencyChecker(int number, int digit)
{
    int dig = 0;
    int frequency =0;
    int num2 = 10;
    int num3 = 1;
    int num1 = 1;
   
    while (num1 != 0)

    {

        num1 = number % num2;
        num1 = num1 / num3;
        num2 = num2 * 10;
        num3 = num3 * 10;
        
        if(num1 == digit ){
            frequency++;
             
        }
       
    }
   num1 = number;
   while (num1 == 0)

    {

        num1 = number % num2;
        num1 = num1 / num3;
        num2 = num2 * 10;
        num3 = num3 * 10;
        
        if(num1 == digit ){
            frequency++;
             
        }
       
    }
   
    return frequency;
}