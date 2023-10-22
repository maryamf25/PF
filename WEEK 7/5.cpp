#include <iostream>
using namespace std;

int digitSum(int number);
main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int ans = digitSum(number);
    cout <<"Sum of digits: " << ans;
}
int digitSum(int number)
{
    int sum=0;
    int num2 = 10;
    int num3 = 1;
    int num1 ;
    num1 = number % num2;
    while (num1 == 0)

    {

        num1 = number % num2;
        num1 = num1 / num3;
        num2 = num2 * 10;
        num3 = num3 * 10;
        
        sum = sum +num1;
       
    }
   num1 = number;
    while (num1 != 0)

    {

        num1 = number % num2;
        num1 = num1 / num3;
        num2 = num2 * 10;
        num3 = num3 * 10;
        
        sum = sum +num1;
       
    }
   
    return sum;
}